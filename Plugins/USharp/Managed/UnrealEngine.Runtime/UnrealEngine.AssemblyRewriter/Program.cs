﻿using Mono.Cecil;
using Mono.Cecil.Pdb;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;

namespace UnrealEngine.Runtime
{
    class Program
    {
        static string additionalAssemblySearchPath;

        public static void Main(string[] args)
        {
            if (!args.Any())
            {
                Console.Error.WriteLine("Error: No input files. Add file path to dll as argument.");
                Environment.Exit(2);
            }

            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();

            UnrealTypes.Load();
            AssemblyRewriter rewriter = new AssemblyRewriter();

            if (Debugger.IsAttached)
            {
                ManagedUnrealReflectionBase.UpdateSerializerCode();
                //RunTests(rewriter);
            }

            AppDomain.CurrentDomain.AssemblyResolve += CurrentDomain_AssemblyResolve;

            foreach (string filePath in args)
            {
                Console.WriteLine("Processing file: " + filePath);
                if (!ProcessAssembly(rewriter, filePath))
                {
                    Environment.ExitCode = 3;
                    break;
                }
                additionalAssemblySearchPath = null;
            }

            stopwatch.Stop();
            Console.WriteLine("AssemblyRewriter finished " + stopwatch.Elapsed);
            if (ManagedUnrealModuleInfo.NumWarnings > 0)
            {
                Console.WriteLine("!!!!!! " + ManagedUnrealModuleInfo.NumWarnings + " warning(s) whilst running AssemblyRewriter");
                ManagedUnrealModuleInfo.NumWarnings = 0;
            }
        }

        private static Assembly CurrentDomain_AssemblyResolve(object sender, ResolveEventArgs args)
        {
            string assemblyPath = Path.Combine(additionalAssemblySearchPath, new AssemblyName(args.Name).Name + ".dll");
            if (File.Exists(assemblyPath))
            {
                return Assembly.LoadFrom(assemblyPath);
            }
            return null;
        }

        private static void RunTests(AssemblyRewriter rewriter)
        {
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
            string assemblyPath = Path.Combine(dir, "../", "UnrealEngine.Runtime.dll");
            if (File.Exists(assemblyPath))
            {
                ProcessAssembly(rewriter, assemblyPath);
            }
        }

        private static bool ProcessAssembly(AssemblyRewriter rewriter, string filePath)
        {
            FileInfo fileInfo = new FileInfo(filePath);
            if (!fileInfo.Exists)
            {
                Console.WriteLine("Couldn't find file \"" + filePath + "\"");
                return false;
            }
            else if (fileInfo.Length == 0)
            {
                Console.WriteLine("File is empty \"" + filePath + "\"");
                return false;
            }
            else
            {
                Assembly assembly = null;

                string pdbFilePath = Path.ChangeExtension(filePath, ".pdb");
                if (Path.GetFileNameWithoutExtension(filePath) == "UnrealEngine.Runtime")
                {
                    // Required so that type comparisons work correctly (this should only be used for testing purposes)
                    assembly = typeof(ManagedUnrealModuleInfo).Assembly;
                }
                else if (File.Exists(pdbFilePath))
                {
                    assembly = Assembly.Load(File.ReadAllBytes(filePath), File.ReadAllBytes(pdbFilePath));
                }
                else
                {
                    assembly = Assembly.Load(File.ReadAllBytes(filePath));
                }

                additionalAssemblySearchPath = Path.GetDirectoryName(filePath);

                if (ManagedUnrealModuleInfo.AssemblyHasSerializedModuleInfo(assembly))
                {
                    if (ManagedUnrealModuleInfo.LoadModuleFromAssembly(assembly) == null)
                    {
                        throw new Exception("Assembly already rewritten but failed to deserialize module info " + assembly.GetName().Name);
                    }
                    Console.WriteLine("Skip \"" + assembly.GetName().Name + "\"");
                    return true;
                }

                Stopwatch stopwatch = new Stopwatch();
                stopwatch.Start();
                ManagedUnrealModuleInfo moduleInfo = null;
                try
                {
                    moduleInfo = ManagedUnrealModuleInfo.CreateModuleFromAssembly(assembly);
                }
                catch (Exception e)
                {
                    Console.WriteLine("Error while parsing module \"" + assembly.GetName().Name + "\"");
                    Console.WriteLine();
                    Console.WriteLine(e.Message);
                    Console.WriteLine();
                    Console.WriteLine(e.ToString());
                }

                stopwatch.Stop();
                Console.WriteLine("Read \"" + assembly.GetName().Name + "\" " + stopwatch.Elapsed + " " + filePath + " Module: " + moduleInfo.AssemblyName);

                if (moduleInfo != null)
                {
                    stopwatch.Reset();
                    stopwatch.Start();

                    bool noError = true;

                    try
                    {
                        rewriter.RewriteModule(moduleInfo, filePath);
                        Console.WriteLine("Write \"" + assembly.GetName().Name + "\" " + stopwatch.Elapsed);
                    }
                    catch (Exception e)
                    {
                        Console.WriteLine("Error when rewriting module \"" + assembly.GetName().Name + "\" " + stopwatch.Elapsed);
                        Console.WriteLine();
                        Console.WriteLine(e.Message);
                        Console.WriteLine();
                        Console.WriteLine(e.ToString());
                        noError = false;
                    }
                    finally
                    {
                        stopwatch.Stop();
                    }

                    return noError;
                }
                else
                {
                    Console.WriteLine("Failed to create module info for \"" + assembly.GetName().Name + "\"");
                    return false;
                }
            }
        }
    }
}
