CSEXPORT csbool CSCONV Export_FNumericProperty_IsFloatingPoint(FNumericProperty* instance)
{
	return instance->IsFloatingPoint();
}

CSEXPORT csbool CSCONV Export_FNumericProperty_IsInteger(FNumericProperty* instance)
{
	return instance->IsInteger();
}

CSEXPORT csbool CSCONV Export_FNumericProperty_IsEnum(FNumericProperty* instance)
{
	return instance->IsEnum();
}

CSEXPORT UEnum* CSCONV Export_FNumericProperty_GetIntPropertyEnum(FNumericProperty* instance)
{
	return instance->GetIntPropertyEnum();
}

CSEXPORT void CSCONV Export_FNumericProperty_SetIntPropertyValueUnsigned(FNumericProperty* instance, void* Data, uint64 Value)
{
	instance->SetIntPropertyValue(Data, Value);
}

CSEXPORT void CSCONV Export_FNumericProperty_SetIntPropertyValueSigned(FNumericProperty* instance, void* Data, int64 Value)
{
	instance->SetIntPropertyValue(Data, Value);
}

CSEXPORT void CSCONV Export_FNumericProperty_SetFloatingPointPropertyValue(FNumericProperty* instance, void* Data, double Value)
{
	instance->SetFloatingPointPropertyValue(Data, Value);
}

CSEXPORT void CSCONV Export_FNumericProperty_SetNumericPropertyValueFromString(FNumericProperty* instance, void* Data, const FString& Value)
{
	instance->SetNumericPropertyValueFromString(Data, *Value);
}

CSEXPORT int64 CSCONV Export_FNumericProperty_GetSignedIntPropertyValue(FNumericProperty* instance, void* Data)
{
	return instance->GetSignedIntPropertyValue(Data);
}

CSEXPORT uint64 CSCONV Export_FNumericProperty_GetUnsignedIntPropertyValue(FNumericProperty* instance, void* Data)
{
	return instance->GetUnsignedIntPropertyValue(Data);
}

CSEXPORT double CSCONV Export_FNumericProperty_GetFloatingPointPropertyValue(FNumericProperty* instance, void* Data)
{
	return instance->GetFloatingPointPropertyValue(Data);
}

CSEXPORT void CSCONV Export_FNumericProperty_GetNumericPropertyValueToString(FNumericProperty* instance, void* Data, FString& result)
{
	result = instance->GetNumericPropertyValueToString(Data);
}

CSEXPORT void CSCONV Export_FNumericProperty(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FNumericProperty_IsFloatingPoint);
	REGISTER_FUNC(Export_FNumericProperty_IsInteger);
	REGISTER_FUNC(Export_FNumericProperty_IsEnum);
	REGISTER_FUNC(Export_FNumericProperty_GetIntPropertyEnum);
	REGISTER_FUNC(Export_FNumericProperty_SetIntPropertyValueUnsigned);
	REGISTER_FUNC(Export_FNumericProperty_SetIntPropertyValueSigned);
	REGISTER_FUNC(Export_FNumericProperty_SetFloatingPointPropertyValue);
	REGISTER_FUNC(Export_FNumericProperty_SetNumericPropertyValueFromString);
	REGISTER_FUNC(Export_FNumericProperty_GetSignedIntPropertyValue);
	REGISTER_FUNC(Export_FNumericProperty_GetUnsignedIntPropertyValue);
	REGISTER_FUNC(Export_FNumericProperty_GetFloatingPointPropertyValue);
	REGISTER_FUNC(Export_FNumericProperty_GetNumericPropertyValueToString);
}