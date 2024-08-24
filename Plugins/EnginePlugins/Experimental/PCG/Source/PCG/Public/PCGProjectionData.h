#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGProjectionParams.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGProjectionData.generated.h"

class UPCGSpatialData;

UCLASS(Blueprintable)
class PCG_API UPCGProjectionData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedStrictBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGProjectionParams ProjectionParams;
    
public:
    UPCGProjectionData();

};

