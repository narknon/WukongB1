CSEXPORT UFunction* CSCONV Export_FDelegateProperty_Get_SignatureFunction(FDelegateProperty* instance)
{
	return instance->SignatureFunction;
}

CSEXPORT void CSCONV Export_FDelegateProperty_Set_SignatureFunction(FDelegateProperty* instance, UFunction* value)
{
	instance->SignatureFunction = value;
}

CSEXPORT void CSCONV Export_FDelegateProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FDelegateProperty_Get_SignatureFunction);
	REGISTER_FUNC(Export_FDelegateProperty_Set_SignatureFunction);
}