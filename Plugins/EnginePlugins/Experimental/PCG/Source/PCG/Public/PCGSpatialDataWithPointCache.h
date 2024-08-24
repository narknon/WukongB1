#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSpatialData.h"
#include "PCGSpatialDataWithPointCache.generated.h"

class UPCGPointData;

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSpatialDataWithPointCache : public UPCGSpatialData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPCGPointData* CachedPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBox> CachedBoundedPointDataBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPCGPointData*> CachedBoundedPointData;
    
public:
    UPCGSpatialDataWithPointCache();

};

