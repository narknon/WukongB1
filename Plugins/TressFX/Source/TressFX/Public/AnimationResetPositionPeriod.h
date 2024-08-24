#pragma once
#include "CoreMinimal.h"
#include "AnimationResetPositionPeriod.generated.h"

USTRUCT(BlueprintType)
struct FAnimationResetPositionPeriod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    TRESSFX_API FAnimationResetPositionPeriod();
};

