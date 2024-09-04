using System;
using System.IO;
using System.Text;
using System.Collections.Generic;

namespace UnrealBuildTool.Rules
{
	public class USharp : ModuleRules
	{
		// If true copy the pdbs when packaging
		private bool copyPdbs = true;
		// The full output path which will be used to build paths relative to $(ProjectDir)
		private string outputRelativeDir;

		public USharp(ReadOnlyTargetRules Target) : base(Target)
		{
			bEnableExceptions = true;
			PCHUsage = ModuleRules.PCHUsageMode.NoSharedPCHs;
			PrivatePCHHeaderFile = "Private/USharpPCH.h";

			PublicIncludePaths.AddRange(
				new string[] {
                    // ... add public include paths required here ...
                }
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"USharp/Private",
					"USharp/Private/ExportedFunctions",
					"USharp/Private/ExportedFunctions/Properties",
					"USharp/Private/ExportedFunctions/Internal",
					"USharp/Private/ExportedFunctions/ConsoleManager",
					"USharp/Private/ExportedFunctions/Online",
                    // ... add other private include paths required here ...
                }
				);

			PublicDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"Projects",
					"InputCore",
					"Slate",
					"Projects",
					"UMG",
					"GameplayTasks",
					"OnlineSubsystem"
                    // ... add other public dependencies that you statically link with here ...
                }
				);
			if (Target.bBuildEditor)
			{
				PublicDependencyModuleNames.AddRange(
					new string[] {
						"Kismet",
						"UnrealEd",
						"BlueprintGraph",
						"KismetCompiler",
						"DesktopPlatform"
					}
					);
				DynamicallyLoadedModuleNames.AddRange(
					new string[] {
                        //"KismetCompiler"
                    }
					);
				/*PublicIncludePathModuleNames.AddRange(
                    new string[] {
                        "KismetCompiler"
                    }
                    );*/
			}

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
                    // ... add private dependencies that you statically link with here ...
                }
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[] {
                    // ... add any modules that your module loads dynamically here ...
                }
				);

			// mscoree.lib doesn't auto resolve on some systems
			if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				Version newestVersion = default(Version);
				string newestLib = null;
				string newestInclude = null;

				string netFxDir = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ProgramFilesX86), "Windows Kits", "NETFXSDK");
				if (Directory.Exists(netFxDir))
				{
					foreach (string versionDir in Directory.GetDirectories(netFxDir))
					{
						string versionDirName = new DirectoryInfo(versionDir).Name;
						Version version;
						if (Version.TryParse(versionDirName, out version) &&
							(newestLib == null || version > newestVersion))
						{
							string archDir = "x64";
							string lib = Path.Combine(versionDir, "Lib", "um", archDir, "mscoree.lib");
							string include = Path.Combine(versionDir, "Include", "um", "mscoree.h");
							if (File.Exists(lib) && File.Exists(include))
							{
								newestLib = lib;
								newestInclude = include;
								newestVersion = version;
							}
						}
					}
				}
				if (!string.IsNullOrEmpty(newestLib) && !string.IsNullOrEmpty(newestInclude))
				{
					PublicIncludePaths.Add(Path.GetDirectoryName(newestInclude));
					PublicAdditionalLibraries.Add(newestLib);
				}
			}

			if ((Target.Type == TargetType.Game || Target.Type == TargetType.Server || Target.Type == TargetType.Client) && Target.ProjectFile != null)
			{
				// If this is a packaged build set up the /Managed/ folders
				SetupManagedPaths(Target.Type);
			}
		}

		private string GetPlatformString()
		{
			// Keep this up to date with CSharpLoader::GetPlatformString()
			return Target.Platform.ToString();
		}

		private string GetPluginManagedBinDir()
		{
			string pluginBinDir = Path.Combine(ModuleDirectory, "..", "..", "Binaries");
			return Path.Combine(pluginBinDir, "Managed");
		}

		private string GetMonoDir(string managedBinDir, bool checkInstallDir)
		{
			// TODO: Also check the default install path of Mono
			return Path.Combine(managedBinDir, "Runtimes", "Mono", GetPlatformString());
		}

		private string GetCoreCLRDir(string managedBinDir, bool checkInstallDir)
		{
			// TODO: Also check the default install path of .NET Core
			return Path.Combine(managedBinDir, "Runtimes", "CoreCLR", GetPlatformString());
		}

		private string GetDotNetRuntimesFile(string managedBinDir)
		{
			return Path.Combine(managedBinDir, "Runtimes", "DotNetRuntime.txt");
		}

		private void SetupManagedPaths(TargetType Type)
		{
			// Target the game project directory
			if (Target == null)
				throw new Exception("Target Is Null!!");
			if (Target.ProjectFile == null)
				throw new Exception("Project File Is Null!!");
			string projectFile = Target.ProjectFile.FullName;
			if (File.Exists(projectFile) && Path.GetExtension(projectFile) == ".uproject" && Directory.Exists(ModuleDirectory))
			{
				// USharp paths (engine plugins folder)
				string pluginManagedBinDir = GetPluginManagedBinDir();
				string pluginShippingManagedBinDir = Path.Combine(pluginManagedBinDir, "Shipping");

				// Game project paths
				string projectDir = Path.GetDirectoryName(projectFile);
				Console.WriteLine("USharp Managed is: " + Type);
				string managedBinDir = Path.Combine(projectDir, "Binaries", Type == TargetType.Client ? "ClientManaged" : "Managed");

				outputRelativeDir = Path.GetFullPath(Path.Combine(projectDir, "Binaries"));


				if (!Directory.Exists(managedBinDir))
				{
					// This might not be a USharp enabled project?
					return;
				}

				// Add CoreCLR/Mono folders to RuntimeDependencies (if they exists)
				// 
				// NOTE: We need to copy the folders locally rather than directly referencing the folders in the engine
				//       plugins folder as RuntimeDependencies depends on paths being within the game project folder.
				string sourceCoreCLRDir = GetCoreCLRDir(pluginManagedBinDir, true);
				string sourceMonoDir = GetMonoDir(pluginManagedBinDir, true);
				string sourceRuntimesFile = GetDotNetRuntimesFile(pluginManagedBinDir);

				string destCoreCLRDir = GetCoreCLRDir(managedBinDir, false);
				string destMonoDir = GetMonoDir(managedBinDir, false);
				string destRuntimesFile = GetDotNetRuntimesFile(managedBinDir);

				bool copyCoreCLR = false;
				bool copyMono = false;
				bool cleanRuntimeFolders = false;// If true delete the contents of the target runtime folders before copying

				if (File.Exists(sourceRuntimesFile))
				{
					foreach (string str in File.ReadAllLines(sourceRuntimesFile))
					{
						string line = str.Trim().ToLower();

						const string packagePrefix = "package:";
						if (line.StartsWith(packagePrefix))
						{
							line = line.Substring(packagePrefix.Length).Trim();

                            switch (line.ToLower())
                            {
                                case "mono":
                                    copyMono = true;
                                    break;
                                case "coreclr":
                                    copyCoreCLR = true;
                                    break;
                                case "clean":
                                    cleanRuntimeFolders = true;
                                    break;
                            }
                        }
                    }
                }
                
                if (Target.Platform == UnrealTargetPlatform.Android)
                {
                    // Mono is currently the only supported runtime on Android. Ensure that it gets packaged.
                    copyMono = true;
                    copyCoreCLR = false;
                }
                
                if (copyMono && !Directory.Exists(sourceMonoDir))
                {
                    copyMono = false;
                }
                
                if (copyCoreCLR && !Directory.Exists(sourceCoreCLRDir))
                {
                    copyCoreCLR = false;
                }

                // Copy the shipping build version of UnrealEngine.Runtime.dll to /ProjectName/Binaries/Managed
				string shippingRuntimeDllPath = Path.Combine(pluginShippingManagedBinDir, "UnrealEngine.Runtime.dll");
				if (File.Exists(shippingRuntimeDllPath))
				{
					File.Copy(shippingRuntimeDllPath, Path.Combine(managedBinDir, "UnrealEngine.Runtime.dll"), true);
				}

				// Add "ProjectName/Binaries/Managed/" to the RuntimeDependencies
				AddToRuntimeDependenciesRecursively(new DirectoryInfo(managedBinDir), Type, "Runtimes");

				if (copyCoreCLR || copyMono)
				{
					// Copy the runtimes text file to the output directory
					FileInfo destRuntimesFileInfo = new FileInfo(destRuntimesFile);
					if (!destRuntimesFileInfo.Directory.Exists)
					{
						Directory.CreateDirectory(destRuntimesFileInfo.DirectoryName);
					}
					CopyFile(sourceRuntimesFile, destRuntimesFile, true);

					if (copyCoreCLR)
					{
						if (cleanRuntimeFolders)
						{
							CleanFolder(destCoreCLRDir);
						}

						// Copy the CoreCLR folder into the project binaries folder
						CopyFilesRecursive(new DirectoryInfo(sourceCoreCLRDir), new DirectoryInfo(destCoreCLRDir), true);
					}

					if (copyMono)
					{
						if (cleanRuntimeFolders)
						{
							CleanFolder(destMonoDir);
						}

						// Copy the Mono folder into the project binaries folder
						CopyFilesRecursive(new DirectoryInfo(sourceMonoDir), new DirectoryInfo(destMonoDir), true);
					}
				}
			}
		}

		private void CleanFolder(string path)
		{
			DirectoryInfo dirInfo = new DirectoryInfo(path);
			if (dirInfo.Exists)
			{
				try
				{
					dirInfo.Delete(true);
				}
				catch
				{
				}
				try
				{
					if (!dirInfo.Exists)
					{
						dirInfo.Create();
					}
				}
				catch
				{
				}
			}
		}

		// Adapted from PluginInstaller/Program.cs
		private void CopyFilesRecursive(DirectoryInfo source, DirectoryInfo target, bool overwrite)
		{
			if (!target.Exists)
			{
				target.Create();
			}

			foreach (DirectoryInfo dir in source.GetDirectories())
			{
				CopyFilesRecursive(dir, target.CreateSubdirectory(dir.Name), overwrite);
			}
			foreach (FileInfo file in source.GetFiles())
			{
				CopyFile(file.FullName, Path.Combine(target.FullName, file.Name), overwrite);
			}
		}

		// Adapted from PluginInstaller/Program.cs
		private void CopyFile(string sourceFileName, string destFileName, bool overwrite)
		{
			if (!copyPdbs && Path.GetExtension(sourceFileName) == ".pdb")
			{
				return;
			}

			if ((overwrite || !File.Exists(destFileName)) && File.Exists(sourceFileName))
			{
				FileInfo srcFileInfo = new FileInfo(sourceFileName);
				FileInfo destFileInfo = new FileInfo(destFileName);
				if (!destFileInfo.Exists ||
					srcFileInfo.Length != destFileInfo.Length ||
					srcFileInfo.LastWriteTimeUtc != destFileInfo.LastWriteTimeUtc)
				{
					// Only copy the file if it has been modified (but always add it to RuntimeDependencies)
					try
					{
						File.Copy(sourceFileName, destFileName, overwrite);
					}
					catch
					{
						Console.WriteLine("USharp-CopyFile: Failed to copy to '{0}'", destFileName);
					}
				}

				if (File.Exists(destFileName))
				{
					string relativePath = Path.GetRelativePath(outputRelativeDir, destFileName);
					RuntimeDependencies.Add("$(ProjectDir)/" + relativePath, StagedFileType.NonUFS);
				}
			}
		}

		private string[] GetAllFiles(DirectoryInfo target, params string[] ignoreDirs)
		{
			List<string> result = new List<string>();
			GetAllFiles(target, result, ignoreDirs);
			return result.ToArray();
		}

		private void GetAllFiles(DirectoryInfo target, List<string> result, params string[] ignoreDirs)
		{
			foreach (DirectoryInfo dir in target.GetDirectories())
			{
				if (Array.IndexOf(ignoreDirs, dir.Name) >= 0)
				{
					result.AddRange(GetAllFiles(dir));
				}
			}
			foreach (FileInfo file in target.GetFiles())
			{
				result.Add(file.FullName);
			}
		}

		/// <summary>
		/// Recursively adds a folder and all files to runtime dependencies without copying
		/// </summary>
		/// <param name="target">The folder to include in the runtime dependencies (the folder must be under the project directory)</param>
		private void AddToRuntimeDependenciesRecursively(DirectoryInfo target, TargetType Type, params string[] ignoreDirs)
		{
			if (target.Exists)
			{
				foreach (DirectoryInfo dir in target.GetDirectories())
				{
					if (Array.IndexOf(ignoreDirs, dir.Name) >= 0)
					{
						AddToRuntimeDependenciesRecursively(target, Type);
					}
				}
				foreach (FileInfo file in target.GetFiles())
				{
					AddFileToRuntimeDependencies(file.FullName, Type);
				}
			}
		}

		/// <summary>
		/// Adds a file to runtime dependencies without copying
		/// </summary>
		/// <param name="destFileName">The file to include in the runtime dependencies (the file must be under the project directory)</param>
		private void AddFileToRuntimeDependencies(string destFileName, TargetType Type)
		{
			if (!copyPdbs && Path.GetExtension(destFileName) == ".pdb")
			{
				return;
			}

			if (!File.Exists(destFileName))
			{
				Console.WriteLine("USharp-AddFileToRuntimeDependencies: Failed Adding '{0}' To Runtime.", destFileName);
				return;
			}
			string relativePath = Path.GetRelativePath(outputRelativeDir, destFileName);
			Console.WriteLine("File " + destFileName + " Relative: " + relativePath);
			RuntimeDependencies.Add("$(ProjectDir)/" + relativePath, StagedFileType.NonUFS);
		}
	}
}