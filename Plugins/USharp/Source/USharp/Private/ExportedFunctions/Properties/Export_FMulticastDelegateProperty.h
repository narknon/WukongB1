CSEXPORT UFunction* CSCONV Export_FMulticastDelegateProperty_Get_SignatureFunction(FMulticastDelegateProperty* instance)
{
	return instance->SignatureFunction;
}

CSEXPORT void CSCONV Export_FMulticastDelegateProperty_Set_SignatureFunction(FMulticastDelegateProperty* instance, UFunction* value)
{
	instance->SignatureFunction = value;
}

CSEXPORT void CSCONV Export_FMulticastDelegateProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FMulticastDelegateProperty_Get_SignatureFunction);
	REGISTER_FUNC(Export_FMulticastDelegateProperty_Set_SignatureFunction);
}