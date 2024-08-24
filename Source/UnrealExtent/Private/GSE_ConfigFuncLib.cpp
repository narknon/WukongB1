#include "GSE_ConfigFuncLib.h"

UGSE_ConfigFuncLib::UGSE_ConfigFuncLib() {
}

void UGSE_ConfigFuncLib::SetVector4(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector4& Vector4Value) {
}

void UGSE_ConfigFuncLib::SetVector2D(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector2D& Vector2DValue) {
}

void UGSE_ConfigFuncLib::SetVector(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector& VectorValue) {
}

void UGSE_ConfigFuncLib::SetText(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FText TextValue) {
}

void UGSE_ConfigFuncLib::SetString(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FString& StringValue) {
}

void UGSE_ConfigFuncLib::SetRotator(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FRotator& RotatorValue) {
}

void UGSE_ConfigFuncLib::SetInt(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const int32 IntValue) {
}

void UGSE_ConfigFuncLib::SetFloat(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const float FloatValue) {
}

void UGSE_ConfigFuncLib::SetColor(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FColor& ColorValue) {
}

void UGSE_ConfigFuncLib::SetBool(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const bool BoolValue) {
}

void UGSE_ConfigFuncLib::SetArray(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const TArray<FString>& ArrayValue) {
}

FVector4 UGSE_ConfigFuncLib::GetVector4(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FVector4{};
}

FVector2D UGSE_ConfigFuncLib::GetVector2D(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FVector2D{};
}

FVector UGSE_ConfigFuncLib::GetVector(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FVector{};
}

FText UGSE_ConfigFuncLib::GetText(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FText::GetEmpty();
}

FString UGSE_ConfigFuncLib::GetString(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return TEXT("");
}

FRotator UGSE_ConfigFuncLib::GetRotator(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FRotator{};
}

int32 UGSE_ConfigFuncLib::GetInt(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return 0;
}

float UGSE_ConfigFuncLib::GetFloat(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return 0.0f;
}

FColor UGSE_ConfigFuncLib::GetColor(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return FColor{};
}

bool UGSE_ConfigFuncLib::GetBool(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return false;
}

TArray<FString> UGSE_ConfigFuncLib::GetArray(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound) {
    return TArray<FString>();
}

void UGSE_ConfigFuncLib::Flush(EConfigIniFileNames ConfigFile, const bool bRefreshInConfigSystem) {
}


