#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_ExitPhasePerformance.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_ExitPhasePerformance : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_ExitPhasePerformance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

