#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPCGMetadataFilterMode.h"
#include "EPCGMetadataOp.h"
#include "EPCGMetadataTypes.h"
#include "PCGPoint.h"
#include "PCGMetadata.generated.h"

class UPCGMetadata;

UCLASS(Blueprintable)
class PCG_API UPCGMetadata : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGMetadata* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UPCGMetadata>> OtherParents;
    
public:
    UPCGMetadata();

    UFUNCTION(BlueprintCallable)
    void SetPointAttributes(const FPCGPoint& Point, const UPCGMetadata* MetaData, UPARAM(Ref) FPCGPoint& OutPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetAttributesByKey(int64 Key, const UPCGMetadata* InMetaData, int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeightedAttributesByKey(int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void ResetPointWeightedAttributes(FPCGPoint& OutPoint);
    
    UFUNCTION(BlueprintCallable)
    bool RenameAttribute(FName AttributeToRename, FName NewAttributeName);
    
    UFUNCTION(BlueprintCallable)
    void MergePointAttributes(const FPCGPoint& PointA, const UPCGMetadata* MetadataA, const FPCGPoint& PointB, const UPCGMetadata* MetadataB, UPARAM(Ref) FPCGPoint& TargetPoint, EPCGMetadataOp Op);
    
    UFUNCTION(BlueprintCallable)
    void MergeAttributesByKey(int64 KeyA, const UPCGMetadata* MetadataA, int64 KeyB, const UPCGMetadata* MetadataB, int64 TargetKey, EPCGMetadataOp Op, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithAttributeFilter(const UPCGMetadata* InParent, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAsCopyWithAttributeFilter(const UPCGMetadata* InMetadataToCopy, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAsCopy(const UPCGMetadata* InMetadataToCopy);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const UPCGMetadata* InParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommonAttributes(const UPCGMetadata* InMetaData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttribute(FName AttributeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes) const;
    
    UFUNCTION(BlueprintCallable)
    void Flatten();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAttribute(FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    void CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateStringAttribute(FName AttributeName, const FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateInteger64Attribute(FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateInteger32Attribute(FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);
    
    UFUNCTION(BlueprintCallable)
    void CopyAttributes(const UPCGMetadata* InOther);
    
    UFUNCTION(BlueprintCallable)
    void CopyAttribute(const UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);
    
    UFUNCTION(BlueprintCallable)
    void ClearAttribute(FName AttributeToClear);
    
    UFUNCTION(BlueprintCallable)
    int64 AddEntry(int64 ParentEntryKey);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesFiltered(const UPCGMetadata* InOther, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributes(const UPCGMetadata* InOther);
    
    UFUNCTION(BlueprintCallable)
    void AddAttribute(const UPCGMetadata* InOther, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateWeightedAttributesByKey(int64 Key, const UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void AccumulatePointWeightedAttributes(const FPCGPoint& InPoint, const UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, UPARAM(Ref) FPCGPoint& OutPoint);
    
};

