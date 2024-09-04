﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UnrealEngine.Runtime
{
    public partial class CodeGenerator
    {
        private void AppendAttribute(CSharpTextBuilder builder, UField field, UnrealModuleInfo module, StructInfo structInfo)
        {
            AppendAttribute(builder, field, module);
            //if (field.IsA<UScriptStruct>() && structInfo.StructAsClass)
            //{
            //    builder.AppendLine("[" + Names.UStructAsClassAttributeShort + "]");
            //}
        }

        private void AppendAttribute(CSharpTextBuilder builder, UField field, UnrealModuleInfo module)
        {
            AppendAttribute(builder, field, module, false);
        }

        private void AppendAttribute(CSharpTextBuilder builder, UField field, UnrealModuleInfo module, bool isCollapsedMember)
        {
			UnrealModuleType moduleType;
			UnrealModuleType moduleAssetType;
			string moduleName = GetModuleName(field, out moduleType, out moduleAssetType);
            if (string.IsNullOrEmpty(moduleName))
            {
				moduleName = module.Name;
            }

            List<string> attributes = new List<string>();

            // TODO: Combine all of this into EPropertyType (add some TypeCode into UField?)
            bool isInterface = false;
			UEnum unrealEnum = field as UEnum;
			UClass unrealClass = field as UClass;            
            UScriptStruct unrealStruct = field as UScriptStruct;

            UFunction unrealFunction = field as UFunction;
            if (unrealFunction != null)
            {
                if (unrealFunction.HasAnyFunctionFlags(EFunctionFlags.Delegate))
                {
                    attributes.Add("UDelegate");
                }
                else
                {
                    string additionalFunctionInfo = string.Empty;
                    
                    // TODO: Only get the script name for virtual functions / interface functions as we currently only need
                    //       this for finding the base function for hooking things up to the native base types.
                    string scriptFunctionName;
                    if (unrealFunction.GetScriptName(out scriptFunctionName))
                    {
                        additionalFunctionInfo += ", OriginalName=\"" + unrealFunction.GetName() + "\"";
                    }

                    if (isCollapsedMember)
                    {
                        // The Flags here might not contain too useful information if there is both a get/set function.
                        // Maybe include a second flags var?
                        attributes.Add("UFunctionAsProp(Flags=0x" + ((uint)unrealFunction.FunctionFlags).ToString("X8") + additionalFunctionInfo + ")");
                    }
                    else
                    {
                        attributes.Add("UFunction(Flags=0x" + ((uint)unrealFunction.FunctionFlags).ToString("X8") + additionalFunctionInfo + ")");
                    }
                }
            }

            UProperty unrealProperty = field as UProperty;
            if (unrealProperty != null)
            {
                attributes.Add("UProperty(Flags=(PropFlags)0x" + ((ulong)unrealProperty.PropertyFlags).ToString("X16") + ")");
            }

            if (unrealStruct != null)
            {
                attributes.Add("UStruct(Flags=0x" + ((uint)unrealStruct.StructFlags).ToString("X8") + ")");
            }
            else if (unrealClass != null)
            {
                // Abstract isn't really required but might help with code browsing to know what is abstract
                // and what isn't. Therefore put it at the start of the attributes list.
                if (unrealClass.HasAnyClassFlags(EClassFlags.Abstract))
                {
                    attributes.Add("Abstract");
                }

                isInterface = unrealClass.IsChildOf<UInterface>();
                if (isInterface)
                {
                    attributes.Add("UInterface(Flags=0x" + ((uint)unrealClass.ClassFlags).ToString("X8") + ")");
                }
                else
                {
                    attributes.Add("UClass(Flags=(ClassFlags)0x" + ((uint)unrealClass.ClassFlags).ToString("X8") + ")");
                }
            }

            if (unrealEnum != null)
            {
                attributes.Add("UEnum");
            }

            if (unrealEnum != null || unrealClass != null || unrealStruct != null)
            {
                bool blueprintType = false;
                bool blueprintable = false;
                if (unrealEnum != null)
                {
                    blueprintType = field.GetBoolMetaData(MDClass.BlueprintType);
                }
                else
                {
                    GetBlueprintability(field as UStruct, out blueprintType, out blueprintable);
                }
                if (blueprintType)
                {
                    attributes.Add(UMeta.GetKey(MDClass.BlueprintType));
                }
                if (unrealClass != null && blueprintable)
                {
                    attributes.Add(UMeta.GetKey(MDClass.Blueprintable));
                }

                attributes.Add("UMetaPath(\"" + field.GetPathName() + "\"" +
                    (isInterface ? ", InterfaceImpl=typeof(" + GetTypeName(unrealClass, null) + "Impl" + ")" : string.Empty) + ")");

            }
            else
            {
                attributes.Add("UMetaPath(\"" + field.GetPathName() + "\")");
            }

            if (attributes.Count > 0)
            {
                builder.AppendLine("[" + string.Join(", ", attributes) + "]");
            }
        }
    }
}
