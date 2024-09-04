CSEXPORT int CSCONV Export_FBoolProperty_GetBoolSize()
{
	return sizeof(bool);
}

CSEXPORT csbool CSCONV Export_FBoolProperty_GetPropertyValue(FBoolProperty* instance, void* Address)
{
	return instance->GetPropertyValue(Address);
}

CSEXPORT void CSCONV Export_FBoolProperty_SetPropertyValue(FBoolProperty* instance, void* Address, csbool Value)
{
	instance->SetPropertyValue(Address, !!Value);
}

CSEXPORT void CSCONV Export_FBoolProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FBoolProperty_GetBoolSize);
	REGISTER_FUNC(Export_FBoolProperty_GetPropertyValue);
	REGISTER_FUNC(Export_FBoolProperty_SetPropertyValue);
}