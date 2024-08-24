#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGSurfaceData.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSurfaceData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
public:
    UPCGSurfaceData();

};

