#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGContext.h"
#include "PCGData.h"
#include "PCGPoint.h"
#include "PCGProjectionParams.h"
#include "PCGSpatialData.generated.h"

class AActor;
class UPCGDifferenceData;
class UPCGIntersectionData;
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
class UPCGUnionData;

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSpatialData : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGMetadata* MetaData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCachedLastSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CachedLastSelector;
    
public:
    UPCGSpatialData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGUnionData* UnionWith(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGPointData* ToPointDataWithContext(UPARAM(Ref) FPCGContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGPointData* ToPointData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGDifferenceData* Subtract(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectPoint(const FTransform& InTransform, const FBox& InBounds, const FPCGProjectionParams& InParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGSpatialData* ProjectOn(const UPCGSpatialData* InOther, const FPCGProjectionParams& InParams) const;
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* MutableMetadata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGIntersectionData* IntersectWith(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromData(const UPCGSpatialData* InSource, const UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNonTrivialTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetStrictBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDimension() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDensityAtPosition(const FVector& InPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBounds() const;
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateEmptyMetadata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGMetadata* ConstMetadata() const;
    
};

