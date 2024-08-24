#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGProjectionData.h"
#include "PCGSplineProjectionData.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSplineProjectionData : public UPCGProjectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector2D ProjectedPosition;
    
    UPCGSplineProjectionData();

};

