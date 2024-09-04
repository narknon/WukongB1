CSEXPORT int32 CSCONV Export_FProperty_Get_ArrayDim(FProperty* instance)
{
	return instance->ArrayDim;
}

CSEXPORT void CSCONV Export_FProperty_Set_ArrayDim(FProperty* instance, int32 value)
{
	instance->ArrayDim = value;
}

CSEXPORT int32 CSCONV Export_FProperty_Get_ElementSize(FProperty* instance)
{
	return instance->ElementSize;
}

CSEXPORT void CSCONV Export_FProperty_Set_ElementSize(FProperty* instance, int32 value)
{
	instance->ElementSize = value;
}

CSEXPORT EPropertyFlags CSCONV Export_FProperty_Get_PropertyFlags(FProperty* instance)
{
	return instance->PropertyFlags;
}

CSEXPORT void CSCONV Export_FProperty_Set_PropertyFlags(FProperty* instance, EPropertyFlags value)
{
	instance->PropertyFlags = value;
}

CSEXPORT uint16 CSCONV Export_FProperty_Get_RepIndex(FProperty* instance)
{
	return instance->RepIndex;
}

CSEXPORT void CSCONV Export_FProperty_Set_RepIndex(FProperty* instance, uint16 value)
{
	instance->RepIndex = value;
}

CSEXPORT void CSCONV Export_FProperty_Get_RepNotifyFunc(FProperty* instance, FName& result)
{
	result = instance->RepNotifyFunc;
}

CSEXPORT void CSCONV Export_FProperty_Set_RepNotifyFunc(FProperty* instance, const FName& value)
{
	instance->RepNotifyFunc = value;
}

CSEXPORT FProperty* CSCONV Export_FProperty_Get_PropertyLinkNext(FProperty* instance)
{
	return instance->PropertyLinkNext;
}

CSEXPORT void CSCONV Export_FProperty_Set_PropertyLinkNext(FProperty* instance, FProperty* value)
{
	instance->PropertyLinkNext = value;
}

CSEXPORT FProperty* CSCONV Export_FProperty_Get_NextRef(FProperty* instance)
{
	return instance->NextRef;
}

CSEXPORT void CSCONV Export_FProperty_Set_NextRef(FProperty* instance, FProperty* value)
{
	instance->NextRef = value;
}

CSEXPORT FProperty* CSCONV Export_FProperty_Get_DestructorLinkNext(FProperty* instance)
{
	return instance->DestructorLinkNext;
}

CSEXPORT void CSCONV Export_FProperty_Set_DestructorLinkNext(FProperty* instance, FProperty* value)
{
	instance->DestructorLinkNext = value;
}

CSEXPORT FProperty* CSCONV Export_FProperty_Get_PostConstructLinkNext(FProperty* instance)
{
	return instance->PostConstructLinkNext;
}

CSEXPORT void CSCONV Export_FProperty_Set_PostConstructLinkNext(FProperty* instance, FProperty* value)
{
	instance->PostConstructLinkNext = value;
}

CSEXPORT void CSCONV Export_FProperty_ImportSingleProperty(const FString& Str, void* DestData, class UStruct* ObjectStruct, UObject* SubobjectOuter, int32 PortFlags, FOutputDevice* Warn, TArray<struct FDefinedProperty>& DefinedProperties, FString& result)
{
	result = FProperty::ImportSingleProperty(*Str, DestData, ObjectStruct, SubobjectOuter, PortFlags, Warn, DefinedProperties);
}

CSEXPORT void CSCONV Export_FProperty_ExportCppDeclaration(FProperty* instance, FOutputDevice& Out, EExportedDeclaration::Type DeclarationType, const FString& ArrayDimOverride, uint32 AdditionalExportCPPFlags)
{
	instance->ExportCppDeclaration(Out, DeclarationType, *ArrayDimOverride, AdditionalExportCPPFlags);
}

CSEXPORT void CSCONV Export_FProperty_GetCPPMacroType(FProperty* instance, FString& ExtendedTypeText, FString& result)
{
	result = instance->GetCPPMacroType(ExtendedTypeText);
}

CSEXPORT csbool CSCONV Export_FProperty_PassCPPArgsByRef(FProperty* instance)
{
	return instance->PassCPPArgsByRef();
}

CSEXPORT void CSCONV Export_FProperty_GetNameCPP(FProperty* instance, FString& result)
{
	result = instance->GetNameCPP();
}

CSEXPORT void CSCONV Export_FProperty_GetCPPType(FProperty* instance, FString* ExtendedTypeText, uint32 CPPExportFlags, FString& result)
{
	result = instance->GetCPPType(ExtendedTypeText, CPPExportFlags);
}

CSEXPORT int32 CSCONV Export_FProperty_GetOffset_ForDebug(FProperty* instance)
{
	return instance->GetOffset_ForDebug();
}

CSEXPORT int32 CSCONV Export_FProperty_GetOffset_ForUFunction(FProperty* instance)
{
	return instance->GetOffset_ForUFunction();
}

CSEXPORT int32 CSCONV Export_FProperty_GetOffset_ForGC(FProperty* instance)
{
	return instance->GetOffset_ForGC();
}

CSEXPORT int32 CSCONV Export_FProperty_GetOffset_ForInternal(FProperty* instance)
{
	return instance->GetOffset_ForInternal();
}

CSEXPORT int32 CSCONV Export_FProperty_GetOffset_ReplaceWith_ContainerPtrToValuePtr(FProperty* instance)
{
	return instance->GetOffset_ReplaceWith_ContainerPtrToValuePtr();
}

CSEXPORT void CSCONV Export_FProperty_LinkWithoutChangingOffset(FProperty* instance, FArchive& Ar)
{
	instance->LinkWithoutChangingOffset(Ar);
}

CSEXPORT int32 CSCONV Export_FProperty_Link(FProperty* instance, FArchive& Ar)
{
	return instance->Link(Ar);
}

CSEXPORT csbool CSCONV Export_FProperty_Identical(FProperty* instance, const void* A, const void* B, uint32 PortFlags)
{
	return instance->Identical(A, B, PortFlags);
}

CSEXPORT csbool CSCONV Export_FProperty_Identical_InContainer(FProperty* instance, const void* A, const void* B, int32 ArrayIndex, uint32 PortFlags)
{
	return instance->Identical_InContainer(A, B, ArrayIndex, PortFlags);
}

CSEXPORT csbool CSCONV Export_FProperty_NetSerializeItem(FProperty* instance, FArchive& Ar, UPackageMap* Map, void* Data, TArray<uint8>* MetaData)
{
	return instance->NetSerializeItem(Ar, Map, Data, MetaData);
}

CSEXPORT void CSCONV Export_FProperty_ExportTextItem(FProperty* instance, FString& ValueStr, const void* PropertyValue, const void* DefaultValue, UObject* Parent, int32 PortFlags, UObject* ExportRootScope)
{
	instance->ExportTextItem(ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope);
}

CSEXPORT void CSCONV Export_FProperty_ImportText(FProperty* instance, const FString& Buffer, void* Data, int32 PortFlags, UObject* OwnerObject, FOutputDevice* ErrorText, FString& result)
{
	result = instance->ImportText(*Buffer, Data, PortFlags, OwnerObject, ErrorText);
}

CSEXPORT csbool CSCONV Export_FProperty_ExportText_Direct(FProperty* instance, FString& ValueStr, const void* Data, const void* Delta, UObject* Parent, int32 PortFlags, UObject* ExportRootScope)
{
	return instance->ExportText_Direct(ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope);
}

CSEXPORT csbool CSCONV Export_FProperty_ExportText_InContainer(FProperty* instance, int32 Index, FString& ValueStr, const void* Data, const void* Delta, UObject* Parent, int32 PortFlags, UObject* ExportRootScope)
{
	return instance->ExportText_InContainer(Index, ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope);
}

CSEXPORT void* CSCONV Export_FProperty_ContainerUObjectPtrToValuePtr(FProperty* instance, UObject* ContainerPtr, int32 ArrayIndex)
{
	return instance->ContainerPtrToValuePtr<void>(ContainerPtr, ArrayIndex);
}

CSEXPORT void* CSCONV Export_FProperty_ContainerVoidPtrToValuePtr(FProperty* instance, void* ContainerPtr, int32 ArrayIndex)
{
	return instance->ContainerPtrToValuePtr<void>(ContainerPtr, ArrayIndex);
}

CSEXPORT void* CSCONV Export_FProperty_ContainerUObjectPtrToValuePtrForDefaults(FProperty* instance, UStruct* ContainerClass, UObject* ContainerPtr, int32 ArrayIndex)
{
	return instance->ContainerPtrToValuePtrForDefaults<void>(ContainerClass, ContainerPtr, ArrayIndex);
}

CSEXPORT void* CSCONV Export_FProperty_ContainerVoidPtrToValuePtrForDefaults(FProperty* instance, UStruct* ContainerClass, void* ContainerPtr, int32 ArrayIndex)
{
	return instance->ContainerPtrToValuePtrForDefaults<void>(ContainerClass, ContainerPtr, ArrayIndex);
}

CSEXPORT csbool CSCONV Export_FProperty_IsInContainer(FProperty* instance, int32 ContainerSize)
{
	return instance->IsInContainer(ContainerSize);
}

CSEXPORT csbool CSCONV Export_FProperty_IsInContainerStruct(FProperty* instance, UStruct* ContainerClass)
{
	return instance->IsInContainer(ContainerClass);
}

CSEXPORT void CSCONV Export_FProperty_CopySingleValue(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopySingleValue(Dest, Src);
}

CSEXPORT uint32 CSCONV Export_FProperty_GetValueTypeHash(FProperty* instance, const void* Src)
{
	return instance->GetValueTypeHash(Src);
}

CSEXPORT void CSCONV Export_FProperty_CopyCompleteValue(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopyCompleteValue(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_CopyCompleteValue_InContainer(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopyCompleteValue_InContainer(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_CopySingleValueToScriptVM(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopySingleValueToScriptVM(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_CopyCompleteValueToScriptVM(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopyCompleteValueToScriptVM(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_CopySingleValueFromScriptVM(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopySingleValueFromScriptVM(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_CopyCompleteValueFromScriptVM(FProperty* instance, void* Dest, void const* Src)
{
	instance->CopyCompleteValueFromScriptVM(Dest, Src);
}

CSEXPORT void CSCONV Export_FProperty_ClearValue(FProperty* instance, void* Data)
{
	instance->ClearValue(Data);
}

CSEXPORT void CSCONV Export_FProperty_ClearValue_InContainer(FProperty* instance, void* Data, int32 ArrayIndex)
{
	instance->ClearValue_InContainer(Data, ArrayIndex);
}

CSEXPORT void CSCONV Export_FProperty_DestroyValue(FProperty* instance, void* Dest)
{
	instance->DestroyValue(Dest);
}

CSEXPORT void CSCONV Export_FProperty_DestroyValue_InContainer(FProperty* instance, void* Dest)
{
	instance->DestroyValue_InContainer(Dest);
}

CSEXPORT void CSCONV Export_FProperty_InitializeValue(FProperty* instance, void* Dest)
{
	instance->InitializeValue(Dest);
}

CSEXPORT void CSCONV Export_FProperty_InitializeValue_InContainer(FProperty* instance, void* Dest)
{
	instance->InitializeValue_InContainer(Dest);
}

CSEXPORT csbool CSCONV Export_FProperty_ValidateImportFlags(FProperty* instance, uint32 PortFlags, FOutputDevice* ErrorText)
{
	return instance->ValidateImportFlags(PortFlags, ErrorText);
}

CSEXPORT csbool CSCONV Export_FProperty_ShouldPort(FProperty* instance, uint32 PortFlags)
{
	return instance->ShouldPort(PortFlags);
}

CSEXPORT void CSCONV Export_FProperty_GetID(FProperty* instance, FName& result)
{
	result = instance->GetID();
}

CSEXPORT void CSCONV Export_FProperty_InstanceSubobjects(FProperty* instance, void* Data, void const* DefaultData, UObject* Owner, struct FObjectInstancingGraph* InstanceGraph)
{
	instance->InstanceSubobjects(Data, DefaultData, Owner, InstanceGraph);
}

CSEXPORT int32 CSCONV Export_FProperty_GetMinAlignment(FProperty* instance)
{
	return instance->GetMinAlignment();
}

CSEXPORT csbool CSCONV Export_FProperty_ContainsObjectReference(FProperty* instance, TArray<const FStructProperty*>& EncounteredStructProps)
{
	return instance->ContainsObjectReference(EncounteredStructProps);
}

CSEXPORT csbool CSCONV Export_FProperty_ContainsWeakObjectReference(FProperty* instance)
{
	return instance->ContainsWeakObjectReference();
}

CSEXPORT csbool CSCONV Export_FProperty_ContainsInstancedObjectProperty(FProperty* instance)
{
	return instance->ContainsInstancedObjectProperty();
}

CSEXPORT void CSCONV Export_FProperty_EmitReferenceInfo(FProperty* instance, UClass& OwnerClass, int32 BaseOffset, TArray<const FStructProperty*>& EncounteredStructProps, FGCStackSizeHelper& StackSizeHelper)
{
	instance->EmitReferenceInfo(OwnerClass, BaseOffset, EncounteredStructProps, StackSizeHelper);
}

CSEXPORT int32 CSCONV Export_FProperty_GetSize(FProperty* instance)
{
	return instance->GetSize();
}

CSEXPORT csbool CSCONV Export_FProperty_ShouldSerializeValue(FProperty* instance, FArchive& Ar)
{
	return instance->ShouldSerializeValue(Ar);
}

CSEXPORT csbool CSCONV Export_FProperty_ShouldDuplicateValue(FProperty* instance)
{
	return instance->ShouldDuplicateValue();
}

CSEXPORT FProperty* CSCONV Export_FProperty_GetOwnerProperty(FProperty* instance)
{
	return instance->GetOwnerProperty();
}

CSEXPORT EPropertyFlags CSCONV Export_FProperty_GetPropertyFlags(FProperty* instance)
{
	return instance->GetPropertyFlags();
}

CSEXPORT void CSCONV Export_FProperty_SetPropertyFlags(FProperty* instance, EPropertyFlags NewFlags)
{
	instance->SetPropertyFlags(NewFlags);
}

CSEXPORT void CSCONV Export_FProperty_ClearPropertyFlags(FProperty* instance, EPropertyFlags NewFlags)
{
	instance->ClearPropertyFlags(NewFlags);
}

CSEXPORT csbool CSCONV Export_FProperty_HasAnyPropertyFlags(FProperty* instance, uint64 FlagsToCheck)
{
	return instance->HasAnyPropertyFlags(FlagsToCheck);
}

CSEXPORT csbool CSCONV Export_FProperty_HasAllPropertyFlags(FProperty* instance, uint64 FlagsToCheck)
{
	return instance->HasAllPropertyFlags(FlagsToCheck);
}

CSEXPORT FProperty* CSCONV Export_FProperty_GetRepOwner(FProperty* instance)
{
	return instance->GetRepOwner();
}

CSEXPORT csbool CSCONV Export_FProperty_IsEditorOnlyProperty(FProperty* instance)
{
	return instance->IsEditorOnlyProperty();
}

CSEXPORT csbool CSCONV Export_FProperty_SameType(FProperty* instance, const FProperty* Other)
{
	return instance->SameType(Other);
}

CSEXPORT void CSCONV Export_FProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FProperty_Get_ArrayDim);
	REGISTER_FUNC(Export_FProperty_Set_ArrayDim);
	REGISTER_FUNC(Export_FProperty_Get_ElementSize);
	REGISTER_FUNC(Export_FProperty_Set_ElementSize);
	REGISTER_FUNC(Export_FProperty_Get_PropertyFlags);
	REGISTER_FUNC(Export_FProperty_Set_PropertyFlags);
	REGISTER_FUNC(Export_FProperty_Get_RepIndex);
	REGISTER_FUNC(Export_FProperty_Set_RepIndex);
	REGISTER_FUNC(Export_FProperty_Get_RepNotifyFunc);
	REGISTER_FUNC(Export_FProperty_Set_RepNotifyFunc);
	REGISTER_FUNC(Export_FProperty_Get_PropertyLinkNext);
	REGISTER_FUNC(Export_FProperty_Set_PropertyLinkNext);
	REGISTER_FUNC(Export_FProperty_Get_NextRef);
	REGISTER_FUNC(Export_FProperty_Set_NextRef);
	REGISTER_FUNC(Export_FProperty_Get_DestructorLinkNext);
	REGISTER_FUNC(Export_FProperty_Set_DestructorLinkNext);
	REGISTER_FUNC(Export_FProperty_Get_PostConstructLinkNext);
	REGISTER_FUNC(Export_FProperty_Set_PostConstructLinkNext);
	REGISTER_FUNC(Export_FProperty_ImportSingleProperty);
	REGISTER_FUNC(Export_FProperty_ExportCppDeclaration);
	REGISTER_FUNC(Export_FProperty_GetCPPMacroType);
	REGISTER_FUNC(Export_FProperty_PassCPPArgsByRef);
	REGISTER_FUNC(Export_FProperty_GetNameCPP);
	REGISTER_FUNC(Export_FProperty_GetCPPType);
	REGISTER_FUNC(Export_FProperty_GetOffset_ForDebug);
	REGISTER_FUNC(Export_FProperty_GetOffset_ForUFunction);
	REGISTER_FUNC(Export_FProperty_GetOffset_ForGC);
	REGISTER_FUNC(Export_FProperty_GetOffset_ForInternal);
	REGISTER_FUNC(Export_FProperty_GetOffset_ReplaceWith_ContainerPtrToValuePtr);
	REGISTER_FUNC(Export_FProperty_LinkWithoutChangingOffset);
	REGISTER_FUNC(Export_FProperty_Link);
	REGISTER_FUNC(Export_FProperty_Identical);
	REGISTER_FUNC(Export_FProperty_Identical_InContainer);
	REGISTER_FUNC(Export_FProperty_NetSerializeItem);
	REGISTER_FUNC(Export_FProperty_ExportTextItem);
	REGISTER_FUNC(Export_FProperty_ImportText);
	REGISTER_FUNC(Export_FProperty_ExportText_Direct);
	REGISTER_FUNC(Export_FProperty_ExportText_InContainer);
	REGISTER_FUNC(Export_FProperty_ContainerUObjectPtrToValuePtr);
	REGISTER_FUNC(Export_FProperty_ContainerVoidPtrToValuePtr);
	REGISTER_FUNC(Export_FProperty_ContainerUObjectPtrToValuePtrForDefaults);
	REGISTER_FUNC(Export_FProperty_ContainerVoidPtrToValuePtrForDefaults);
	REGISTER_FUNC(Export_FProperty_IsInContainer);
	REGISTER_FUNC(Export_FProperty_IsInContainerStruct);
	REGISTER_FUNC(Export_FProperty_CopySingleValue);
	REGISTER_FUNC(Export_FProperty_GetValueTypeHash);
	REGISTER_FUNC(Export_FProperty_CopyCompleteValue);
	REGISTER_FUNC(Export_FProperty_CopyCompleteValue_InContainer);
	REGISTER_FUNC(Export_FProperty_CopySingleValueToScriptVM);
	REGISTER_FUNC(Export_FProperty_CopyCompleteValueToScriptVM);
	REGISTER_FUNC(Export_FProperty_CopySingleValueFromScriptVM);
	REGISTER_FUNC(Export_FProperty_CopyCompleteValueFromScriptVM);
	REGISTER_FUNC(Export_FProperty_ClearValue);
	REGISTER_FUNC(Export_FProperty_ClearValue_InContainer);
	REGISTER_FUNC(Export_FProperty_DestroyValue);
	REGISTER_FUNC(Export_FProperty_DestroyValue_InContainer);
	REGISTER_FUNC(Export_FProperty_InitializeValue);
	REGISTER_FUNC(Export_FProperty_InitializeValue_InContainer);
	REGISTER_FUNC(Export_FProperty_ValidateImportFlags);
	REGISTER_FUNC(Export_FProperty_ShouldPort);
	REGISTER_FUNC(Export_FProperty_GetID);
	REGISTER_FUNC(Export_FProperty_InstanceSubobjects);
	REGISTER_FUNC(Export_FProperty_GetMinAlignment);
	REGISTER_FUNC(Export_FProperty_ContainsObjectReference);
	REGISTER_FUNC(Export_FProperty_ContainsWeakObjectReference);
	REGISTER_FUNC(Export_FProperty_ContainsInstancedObjectProperty);
	REGISTER_FUNC(Export_FProperty_EmitReferenceInfo);
	REGISTER_FUNC(Export_FProperty_GetSize);
	REGISTER_FUNC(Export_FProperty_ShouldSerializeValue);
	REGISTER_FUNC(Export_FProperty_ShouldDuplicateValue);
	REGISTER_FUNC(Export_FProperty_GetOwnerProperty);
	REGISTER_FUNC(Export_FProperty_GetPropertyFlags);
	REGISTER_FUNC(Export_FProperty_SetPropertyFlags);
	REGISTER_FUNC(Export_FProperty_ClearPropertyFlags);
	REGISTER_FUNC(Export_FProperty_HasAnyPropertyFlags);
	REGISTER_FUNC(Export_FProperty_HasAllPropertyFlags);
	REGISTER_FUNC(Export_FProperty_GetRepOwner);
	REGISTER_FUNC(Export_FProperty_IsEditorOnlyProperty);
	REGISTER_FUNC(Export_FProperty_SameType);
}