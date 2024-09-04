CSEXPORT UClass* CSCONV Export_FClassProperty_Get_MetaClass(FClassProperty* instance)
{
	return instance->MetaClass;
}

CSEXPORT void CSCONV Export_FClassProperty_Set_MetaClass(FClassProperty* instance, UClass* value)
{
	instance->MetaClass = value;
}

CSEXPORT void CSCONV Export_FClassProperty_SetMetaClass(FClassProperty* instance, UClass* NewMetaClass)
{
	instance->SetMetaClass(NewMetaClass);
}

CSEXPORT void CSCONV Export_FClassProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FClassProperty_Get_MetaClass);
	REGISTER_FUNC(Export_FClassProperty_Set_MetaClass);
	REGISTER_FUNC(Export_FClassProperty_SetMetaClass);
}