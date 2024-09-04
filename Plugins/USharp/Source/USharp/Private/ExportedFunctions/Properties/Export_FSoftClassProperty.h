CSEXPORT UClass* CSCONV Export_FSoftClassProperty_Get_MetaClass(FSoftClassProperty* instance)
{
	return instance->MetaClass;
}

CSEXPORT void CSCONV Export_FSoftClassProperty_Set_MetaClass(FSoftClassProperty* instance, UClass* value)
{
	instance->MetaClass = value;
}

CSEXPORT void CSCONV Export_FSoftClassProperty_SetMetaClass(FSoftClassProperty* instance, UClass* NewMetaClass)
{
	instance->SetMetaClass(NewMetaClass);
}

CSEXPORT void CSCONV Export_FSoftClassProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FSoftClassProperty_Get_MetaClass);
	REGISTER_FUNC(Export_FSoftClassProperty_Set_MetaClass);
	REGISTER_FUNC(Export_FSoftClassProperty_SetMetaClass);
}