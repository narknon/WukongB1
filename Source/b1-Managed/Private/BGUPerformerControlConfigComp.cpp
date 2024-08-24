#include "BGUPerformerControlConfigComp.h"

UBGUPerformerControlConfigComp::UBGUPerformerControlConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBGUPerformerControlConfigComp::GetPossibleParamsCS_Implementation(const FString& ParentPropertyName, const FString& PropertyName, TArray<FCalliopeGuid>& OutParamArray) {
}

FString UBGUPerformerControlConfigComp::GetParamDisplayNameCS_Implementation(const FString& PropertyName, const FCalliopeGuid& ConfigGuid) {
    return TEXT("");
}


