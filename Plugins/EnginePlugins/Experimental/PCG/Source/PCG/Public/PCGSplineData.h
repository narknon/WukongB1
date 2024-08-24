#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPolyLineData.h"
#include "PCGSplineStruct.h"
#include "PCGSplineData.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSplineData : public UPCGPolyLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSplineStruct SplineStruct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
public:
    UPCGSplineData();

};

