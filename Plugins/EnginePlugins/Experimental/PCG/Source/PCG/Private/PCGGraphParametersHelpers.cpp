#include "PCGGraphParametersHelpers.h"

UPCGGraphParametersHelpers::UPCGGraphParametersHelpers() {
}

void UPCGGraphParametersHelpers::SetVectorParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FVector& Value) {
}

void UPCGGraphParametersHelpers::SetTransformParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FTransform& Value) {
}

void UPCGGraphParametersHelpers::SetStringParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FString& Value) {
}

void UPCGGraphParametersHelpers::SetSoftObjectParameter(UPCGGraphInstance* GraphInstance, const FName Name, const TSoftObjectPtr<UObject>& Value) {
}

void UPCGGraphParametersHelpers::SetSoftClassParameter(UPCGGraphInstance* GraphInstance, const FName Name, const TSoftClassPtr<UObject>& Value) {
}

void UPCGGraphParametersHelpers::SetRotatorParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FRotator& Value) {
}

void UPCGGraphParametersHelpers::SetNameParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FName Value) {
}

void UPCGGraphParametersHelpers::SetInt64Parameter(UPCGGraphInstance* GraphInstance, const FName Name, const int64 Value) {
}

void UPCGGraphParametersHelpers::SetInt32Parameter(UPCGGraphInstance* GraphInstance, const FName Name, const int32 Value) {
}

void UPCGGraphParametersHelpers::SetFloatParameter(UPCGGraphInstance* GraphInstance, const FName Name, const float Value) {
}

void UPCGGraphParametersHelpers::SetEnumParameter(UPCGGraphInstance* GraphInstance, const FName Name, const UEnum* Enum, const uint8 Value) {
}

void UPCGGraphParametersHelpers::SetDoubleParameter(UPCGGraphInstance* GraphInstance, const FName Name, const double Value) {
}

void UPCGGraphParametersHelpers::SetByteParameter(UPCGGraphInstance* GraphInstance, const FName Name, const uint8 Value) {
}

void UPCGGraphParametersHelpers::SetBoolParameter(UPCGGraphInstance* GraphInstance, const FName Name, const bool bValue) {
}

bool UPCGGraphParametersHelpers::IsOverridden(UPCGGraphInstance* GraphInstance, const FName Name) {
    return false;
}

FVector UPCGGraphParametersHelpers::GetVectorParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return FVector{};
}

FTransform UPCGGraphParametersHelpers::GetTransformParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return FTransform{};
}

FString UPCGGraphParametersHelpers::GetStringParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return TEXT("");
}

TSoftObjectPtr<UObject> UPCGGraphParametersHelpers::GetSoftObjectParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return NULL;
}

TSoftClassPtr<UObject> UPCGGraphParametersHelpers::GetSoftClassParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return NULL;
}

FRotator UPCGGraphParametersHelpers::GetRotatorParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return FRotator{};
}

FName UPCGGraphParametersHelpers::GetNameParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return NAME_None;
}

int64 UPCGGraphParametersHelpers::GetInt64Parameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return 0;
}

int32 UPCGGraphParametersHelpers::GetInt32Parameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return 0;
}

float UPCGGraphParametersHelpers::GetFloatParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return 0.0f;
}

double UPCGGraphParametersHelpers::GetDoubleParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return 0.0;
}

uint8 UPCGGraphParametersHelpers::GetByteParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return 0;
}

bool UPCGGraphParametersHelpers::GetBoolParameter(UPCGGraphInstance* GraphInstance, const FName Name) {
    return false;
}


