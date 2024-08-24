#pragma once
#include "CoreMinimal.h"
#include "EGSCapturedStatType.h"
#include "CapturedInfoSequencePerPoint.generated.h"

USTRUCT(BlueprintType)
struct FCapturedInfoSequencePerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CapturedInfoSequencePerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSCapturedStatType StatType;
    
    UNREALEXTENT_API FCapturedInfoSequencePerPoint();
};

