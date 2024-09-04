CSEXPORT UEnum* CSCONV Export_FByteProperty_Get_Enum(FByteProperty* instance)
{
	return instance->Enum;
}

CSEXPORT void CSCONV Export_FByteProperty_Set_Enum(FByteProperty* instance, UEnum* value)
{
	instance->Enum = value;
}

CSEXPORT void CSCONV Export_FByteProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FByteProperty_Get_Enum);
	REGISTER_FUNC(Export_FByteProperty_Set_Enum);
}