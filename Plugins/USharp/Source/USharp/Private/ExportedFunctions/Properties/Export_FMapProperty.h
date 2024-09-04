CSEXPORT FProperty* CSCONV Export_FMapProperty_Get_KeyProp(FMapProperty* instance)
{
	return instance->KeyProp;
}

CSEXPORT void CSCONV Export_FMapProperty_Set_KeyProp(FMapProperty* instance, FProperty* value)
{
	instance->KeyProp = value;
}

CSEXPORT FProperty* CSCONV Export_FMapProperty_Get_ValueProp(FMapProperty* instance)
{
	return instance->ValueProp;
}

CSEXPORT void CSCONV Export_FMapProperty_Set_ValueProp(FMapProperty* instance, FProperty* value)
{
	instance->ValueProp = value;
}

CSEXPORT FScriptMapLayout CSCONV Export_FMapProperty_Get_MapLayout(FMapProperty* instance)
{
	return instance->MapLayout;
}

CSEXPORT void CSCONV Export_FMapProperty_Set_MapLayout(FMapProperty* instance, FScriptMapLayout value)
{
	instance->MapLayout = value;
}

CSEXPORT void CSCONV Export_FMapProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FMapProperty_Get_KeyProp);
	REGISTER_FUNC(Export_FMapProperty_Set_KeyProp);
	REGISTER_FUNC(Export_FMapProperty_Get_ValueProp);
	REGISTER_FUNC(Export_FMapProperty_Set_ValueProp);
	REGISTER_FUNC(Export_FMapProperty_Get_MapLayout);
	REGISTER_FUNC(Export_FMapProperty_Set_MapLayout);
}