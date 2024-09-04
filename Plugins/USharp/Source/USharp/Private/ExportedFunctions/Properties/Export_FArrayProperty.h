CSEXPORT FProperty* CSCONV Export_FArrayProperty_Get_Inner(FArrayProperty* instance)
{
	return instance->Inner;
}

CSEXPORT void CSCONV Export_FArrayProperty_Set_Inner(FArrayProperty* instance, FProperty* value)
{
	instance->Inner = value;
}
CSEXPORT void CSCONV Export_FArrayProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FArrayProperty_Get_Inner);
	REGISTER_FUNC(Export_FArrayProperty_Set_Inner);
}