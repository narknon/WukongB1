#include "SubstanceGraphInstance.h"

USubstanceGraphInstance::USubstanceGraphInstance() {
    this->ParentFactory = NULL;
    this->CreatedMaterial = NULL;
    this->bIsFrozen = false;
}

void USubstanceGraphInstance::SetInputString(const FString& Identifier, const FString& Value) {
}

void USubstanceGraphInstance::SetInputInt(const FString& Identifier, const TArray<int32>& InputValues) {
}

bool USubstanceGraphInstance::SetInputImg(const FString& InputName, UObject* Value) {
    return false;
}

void USubstanceGraphInstance::SetInputFloat(const FString& Identifier, const TArray<float>& InputValues) {
}

void USubstanceGraphInstance::SetInputColor(const FString& Identifier, const FLinearColor& Color) {
}

void USubstanceGraphInstance::SetInputBool(const FString& Identifier, bool Bool) {
}

FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const FString& Identifier) {
    return FSubstanceIntInputDesc{};
}

FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc() {
    return FSubstanceInstanceDesc{};
}

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(const FString& InputName) {
    return SIT_Float;
}

FString USubstanceGraphInstance::GetInputString(const FString& Identifier) {
    return TEXT("");
}

TArray<FString> USubstanceGraphInstance::GetInputNames() {
    return TArray<FString>();
}

TArray<int32> USubstanceGraphInstance::GetInputInt(const FString& Identifier) {
    return TArray<int32>();
}

TArray<float> USubstanceGraphInstance::GetInputFloat(const FString& Identifier) {
    return TArray<float>();
}

FLinearColor USubstanceGraphInstance::GetInputColor(const FString& Identifier) {
    return FLinearColor{};
}

bool USubstanceGraphInstance::GetInputBool(const FString& Identifier) {
    return false;
}

FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const FString& Identifier) {
    return FSubstanceFloatInputDesc{};
}


