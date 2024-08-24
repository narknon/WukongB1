#pragma once
#include "CoreMinimal.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGPolyLineData.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGPolyLineData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
    UPCGPolyLineData();

};

