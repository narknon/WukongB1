#include "PCGMetadataAccessorHelpers.h"

UPCGMetadataAccessorHelpers::UPCGMetadataAccessorHelpers() {
}

void UPCGMetadataAccessorHelpers::SetVectorAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector& Value) {
}

void UPCGMetadataAccessorHelpers::SetVectorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector& Value) {
}

void UPCGMetadataAccessorHelpers::SetVector4AttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value) {
}

void UPCGMetadataAccessorHelpers::SetVector4Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value) {
}

void UPCGMetadataAccessorHelpers::SetVector2AttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value) {
}

void UPCGMetadataAccessorHelpers::SetVector2Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value) {
}

void UPCGMetadataAccessorHelpers::SetTransformAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value) {
}

void UPCGMetadataAccessorHelpers::SetTransformAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value) {
}

void UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FString& Value) {
}

void UPCGMetadataAccessorHelpers::SetStringAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FString& Value) {
}

void UPCGMetadataAccessorHelpers::SetRotatorAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value) {
}

void UPCGMetadataAccessorHelpers::SetRotatorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value) {
}

void UPCGMetadataAccessorHelpers::SetQuatAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value) {
}

void UPCGMetadataAccessorHelpers::SetQuatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value) {
}

void UPCGMetadataAccessorHelpers::SetNameAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FName& Value) {
}

void UPCGMetadataAccessorHelpers::SetInteger64AttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, int64 Value) {
}

void UPCGMetadataAccessorHelpers::SetInteger64Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int64 Value) {
}

void UPCGMetadataAccessorHelpers::SetInteger32AttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, int32 Value) {
}

void UPCGMetadataAccessorHelpers::SetInteger32Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int32 Value) {
}

void UPCGMetadataAccessorHelpers::SetFloatAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, float Value) {
}

void UPCGMetadataAccessorHelpers::SetFloatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, float Value) {
}

void UPCGMetadataAccessorHelpers::SetDoubleAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, double Value) {
}

void UPCGMetadataAccessorHelpers::SetDoubleAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, double Value) {
}

void UPCGMetadataAccessorHelpers::SetBoolAttributeByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, bool Value) {
}

void UPCGMetadataAccessorHelpers::SetBoolAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, bool Value) {
}

bool UPCGMetadataAccessorHelpers::SetAttributeFromPropertyByMetadataKey(int64& Key, UPCGMetadata* MetaData, FName AttributeName, const UObject* Object, FName PropertyName) {
    return false;
}

void UPCGMetadataAccessorHelpers::InitializeMetadata(FPCGPoint& Point, UPCGMetadata* MetaData, const FPCGPoint& ParentPoint, const UPCGMetadata* ParentMetadata) {
}

bool UPCGMetadataAccessorHelpers::HasAttributeSetByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return false;
}

bool UPCGMetadataAccessorHelpers::HasAttributeSet(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return false;
}

FVector UPCGMetadataAccessorHelpers::GetVectorAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector{};
}

FVector UPCGMetadataAccessorHelpers::GetVectorAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector{};
}

FVector4 UPCGMetadataAccessorHelpers::GetVector4AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector4{};
}

FVector4 UPCGMetadataAccessorHelpers::GetVector4Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector4{};
}

FVector2D UPCGMetadataAccessorHelpers::GetVector2AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector2D{};
}

FVector2D UPCGMetadataAccessorHelpers::GetVector2Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FVector2D{};
}

FTransform UPCGMetadataAccessorHelpers::GetTransformAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FTransform{};
}

FTransform UPCGMetadataAccessorHelpers::GetTransformAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FTransform{};
}

FString UPCGMetadataAccessorHelpers::GetStringAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return TEXT("");
}

FString UPCGMetadataAccessorHelpers::GetStringAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return TEXT("");
}

FRotator UPCGMetadataAccessorHelpers::GetRotatorAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FRotator{};
}

FRotator UPCGMetadataAccessorHelpers::GetRotatorAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FRotator{};
}

FQuat UPCGMetadataAccessorHelpers::GetQuatAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return FQuat{};
}

FQuat UPCGMetadataAccessorHelpers::GetQuatAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return FQuat{};
}

FName UPCGMetadataAccessorHelpers::GetNameAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return NAME_None;
}

int64 UPCGMetadataAccessorHelpers::GetInteger64AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0;
}

int64 UPCGMetadataAccessorHelpers::GetInteger64Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0;
}

int32 UPCGMetadataAccessorHelpers::GetInteger32AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0;
}

int32 UPCGMetadataAccessorHelpers::GetInteger32Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0;
}

float UPCGMetadataAccessorHelpers::GetFloatAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0.0f;
}

float UPCGMetadataAccessorHelpers::GetFloatAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0.0f;
}

double UPCGMetadataAccessorHelpers::GetDoubleAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0.0;
}

double UPCGMetadataAccessorHelpers::GetDoubleAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return 0.0;
}

bool UPCGMetadataAccessorHelpers::GetBoolAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName) {
    return false;
}

bool UPCGMetadataAccessorHelpers::GetBoolAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName) {
    return false;
}

void UPCGMetadataAccessorHelpers::CopyPoint(const FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, const UPCGMetadata* InMetaData, UPCGMetadata* OutMetadata) {
}


