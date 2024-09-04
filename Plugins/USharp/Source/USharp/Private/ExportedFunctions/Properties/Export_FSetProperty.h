CSEXPORT FProperty* CSCONV Export_FSetProperty_Get_ElementProp(FSetProperty* instance)
{
	return instance->ElementProp;
}

CSEXPORT void CSCONV Export_FSetProperty_Set_ElementProp(FSetProperty* instance, FProperty* value)
{
	instance->ElementProp = value;
}

CSEXPORT FScriptSetLayout CSCONV Export_FSetProperty_Get_SetLayout(FSetProperty* instance)
{
	return instance->SetLayout;
}

CSEXPORT void CSCONV Export_FSetProperty_Set_SetLayout(FSetProperty* instance, FScriptSetLayout value)
{
	instance->SetLayout = value;
}

CSEXPORT void CSCONV Export_FSetProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FSetProperty_Get_ElementProp);
	REGISTER_FUNC(Export_FSetProperty_Set_ElementProp);
	REGISTER_FUNC(Export_FSetProperty_Get_SetLayout);
	REGISTER_FUNC(Export_FSetProperty_Set_SetLayout);
}