#include "PCGMetadata.h"

UPCGMetadata::UPCGMetadata() {
    this->Parent = NULL;
}

void UPCGMetadata::SetPointAttributes(const FPCGPoint& Point, const UPCGMetadata* MetaData, FPCGPoint& OutPoint) {
}

void UPCGMetadata::SetAttributesByKey(int64 Key, const UPCGMetadata* InMetaData, int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::ResetWeightedAttributesByKey(int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::ResetPointWeightedAttributes(FPCGPoint& OutPoint) {
}

bool UPCGMetadata::RenameAttribute(FName AttributeToRename, FName NewAttributeName) {
    return false;
}

void UPCGMetadata::MergePointAttributes(const FPCGPoint& PointA, const UPCGMetadata* MetadataA, const FPCGPoint& PointB, const UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op) {
}

void UPCGMetadata::MergeAttributesByKey(int64 KeyA, const UPCGMetadata* MetadataA, int64 KeyB, const UPCGMetadata* MetadataB, int64 TargetKey, EPCGMetadataOp Op, int64& OutKey) {
}

void UPCGMetadata::InitializeWithAttributeFilter(const UPCGMetadata* InParent, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode) {
}

void UPCGMetadata::InitializeAsCopyWithAttributeFilter(const UPCGMetadata* InMetadataToCopy, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode) {
}

void UPCGMetadata::InitializeAsCopy(const UPCGMetadata* InMetadataToCopy) {
}

void UPCGMetadata::Initialize(const UPCGMetadata* InParent) {
}

bool UPCGMetadata::HasCommonAttributes(const UPCGMetadata* InMetaData) const {
    return false;
}

bool UPCGMetadata::HasAttribute(FName AttributeName) const {
    return false;
}

void UPCGMetadata::GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes) const {
}

void UPCGMetadata::Flatten() {
}

void UPCGMetadata::DeleteAttribute(FName AttributeName) {
}

void UPCGMetadata::CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateStringAttribute(FName AttributeName, const FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateInteger64Attribute(FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateInteger32Attribute(FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

void UPCGMetadata::CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
}

bool UPCGMetadata::CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent) {
    return false;
}

void UPCGMetadata::CopyAttributes(const UPCGMetadata* InOther) {
}

void UPCGMetadata::CopyAttribute(const UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName) {
}

void UPCGMetadata::ClearAttribute(FName AttributeToClear) {
}

int64 UPCGMetadata::AddEntry(int64 ParentEntryKey) {
    return 0;
}

void UPCGMetadata::AddAttributesFiltered(const UPCGMetadata* InOther, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode) {
}

void UPCGMetadata::AddAttributes(const UPCGMetadata* InOther) {
}

void UPCGMetadata::AddAttribute(const UPCGMetadata* InOther, FName AttributeName) {
}

void UPCGMetadata::AccumulateWeightedAttributesByKey(int64 Key, const UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::AccumulatePointWeightedAttributes(const FPCGPoint& InPoint, const UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint) {
}


