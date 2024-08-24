#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCGUnionDensityFunction.h"
#include "EPCGUnionType.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGUnionData.generated.h"

class UPCGSpatialData;

UCLASS(Blueprintable)
class PCG_API UPCGUnionData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGSpatialData*> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* FirstNonTrivialTransformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionType UnionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionDensityFunction DensityFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedStrictBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedDimension;
    
public:
    UPCGUnionData();

    UFUNCTION(BlueprintCallable)
    void Initialize(const UPCGSpatialData* InA, const UPCGSpatialData* InB);
    
    UFUNCTION(BlueprintCallable)
    void AddData(const UPCGSpatialData* InData);
    
};

