CSEXPORT UClass* CSCONV Export_FObjectPropertyBase_Get_PropertyClass(FObjectPropertyBase* instance)
{
	return instance->PropertyClass;
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_Set_PropertyClass(FObjectPropertyBase* instance, UClass* Value)
{
	instance->PropertyClass = Value;
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_GetCPPTypeCustom(FObjectPropertyBase* instance, FString* ExtendedTypeText, uint32 CPPExportFlags, const FString& InnerNativeTypeName, FString& result)
{
	result = instance->GetCPPTypeCustom(ExtendedTypeText, CPPExportFlags, InnerNativeTypeName);
}

CSEXPORT csbool CSCONV Export_FObjectPropertyBase_ParseObjectPropertyValue(const FProperty* Property, UObject* OwnerObject, UClass* RequiredMetaClass, uint32 PortFlags, const FString& Buffer, UObject*& out_ResolvedValue)
{
	const TCHAR* BufferChars = *Buffer;
	return FObjectPropertyBase::ParseObjectPropertyValue(Property, OwnerObject, RequiredMetaClass, PortFlags, BufferChars, out_ResolvedValue);
}

CSEXPORT UObject* CSCONV Export_FObjectPropertyBase_FindImportedObject(const FProperty* Property, UObject* OwnerObject, UClass* ObjectClass, UClass* RequiredMetaClass, const FString& Text, uint32 PortFlags)
{
	return FObjectPropertyBase::FindImportedObject(Property, OwnerObject, ObjectClass, RequiredMetaClass, *Text, PortFlags);
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_GetExportPath(const UObject* Object, const UObject* Parent, const UObject* ExportRootScope, const uint32 PortFlags, FString& result)
{
	result = FObjectPropertyBase::GetExportPath(Object, Parent, ExportRootScope, PortFlags);
}

CSEXPORT UObject* CSCONV Export_FObjectPropertyBase_GetObjectPropertyValue(FObjectPropertyBase* instance, const void* PropertyValueAddress)
{
	return instance->GetObjectPropertyValue(PropertyValueAddress);
}

CSEXPORT UObject* CSCONV Export_FObjectPropertyBase_GetObjectPropertyValue_InContainer(FObjectPropertyBase* instance, const void* PropertyValueAddress, int32 ArrayIndex)
{
	return instance->GetObjectPropertyValue_InContainer(PropertyValueAddress, ArrayIndex);
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_SetObjectPropertyValue(FObjectPropertyBase* instance, void* PropertyValueAddress, UObject* Value)
{
	instance->SetObjectPropertyValue(PropertyValueAddress, Value);
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_SetObjectPropertyValue_InContainer(FObjectPropertyBase* instance, void* PropertyValueAddress, UObject* Value, int32 ArrayIndex)
{
	instance->SetObjectPropertyValue_InContainer(PropertyValueAddress, Value, ArrayIndex);
}

CSEXPORT void CSCONV Export_FObjectPropertyBase_SetPropertyClass(FObjectPropertyBase* instance, UClass* NewPropertyClass)
{
	instance->SetPropertyClass(NewPropertyClass);
}

CSEXPORT void CSCONV Export_FObjectPropertyBase(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FObjectPropertyBase_Get_PropertyClass);
	REGISTER_FUNC(Export_FObjectPropertyBase_Set_PropertyClass);
	REGISTER_FUNC(Export_FObjectPropertyBase_GetCPPTypeCustom);
	REGISTER_FUNC(Export_FObjectPropertyBase_ParseObjectPropertyValue);
	REGISTER_FUNC(Export_FObjectPropertyBase_FindImportedObject);
	REGISTER_FUNC(Export_FObjectPropertyBase_GetExportPath);
	REGISTER_FUNC(Export_FObjectPropertyBase_GetObjectPropertyValue);
	REGISTER_FUNC(Export_FObjectPropertyBase_GetObjectPropertyValue_InContainer);
	REGISTER_FUNC(Export_FObjectPropertyBase_SetObjectPropertyValue);
	REGISTER_FUNC(Export_FObjectPropertyBase_SetObjectPropertyValue_InContainer);
	REGISTER_FUNC(Export_FObjectPropertyBase_SetPropertyClass);
}