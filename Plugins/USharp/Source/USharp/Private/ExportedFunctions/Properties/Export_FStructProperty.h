CSEXPORT UScriptStruct* CSCONV Export_UStructProperty_Get_Struct(FStructProperty* instance)
{
	return instance->Struct;
}

CSEXPORT void CSCONV Export_UStructProperty_Set_Struct(FStructProperty* instance, UScriptStruct* value)
{
	instance->Struct = value;
}

CSEXPORT void CSCONV Export_UStructProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_UStructProperty_Get_Struct);
	REGISTER_FUNC(Export_UStructProperty_Set_Struct);
}