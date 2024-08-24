#pragma once
#include "CoreMinimal.h"
#include "AnimationResetPositionPeriod.h"
#include "AnimationTressFXSimulationSettings.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FAnimationTressFXSimulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TressFXSimulationSettingsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationResetPositionPeriod> AnimResetPositionPeriods;
    
    TRESSFX_API FAnimationTressFXSimulationSettings();
};

