#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode.h"
#include "DetectedUnitType.h"
#include "GameplayCounterType.h"
#include "BED_BehaviorNode_GameDataCounter.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_GameDataCounter : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedUnitType UnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GameplayCounterType CounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterValue;
    
    UBED_BehaviorNode_GameDataCounter();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

