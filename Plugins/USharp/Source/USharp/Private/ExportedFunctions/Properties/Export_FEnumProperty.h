CSEXPORT void CSCONV Export_FEnumProperty_SetEnum(FEnumProperty* instance, UEnum* InEnum)
{
	return instance->SetEnum(InEnum);
}

CSEXPORT UEnum* CSCONV Export_FEnumProperty_GetEnum(FEnumProperty* instance)
{
	return instance->GetEnum();
}

CSEXPORT FNumericProperty* CSCONV Export_FEnumProperty_GetUnderlyingProperty(FEnumProperty* instance)
{
	return instance->GetUnderlyingProperty();
}

CSEXPORT void CSCONV Export_FEnumProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FEnumProperty_SetEnum);
	REGISTER_FUNC(Export_FEnumProperty_GetEnum);
	REGISTER_FUNC(Export_FEnumProperty_GetUnderlyingProperty);
}