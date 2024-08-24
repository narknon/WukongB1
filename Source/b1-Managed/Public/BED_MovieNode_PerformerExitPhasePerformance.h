#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerExitPhasePerformance.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerExitPhasePerformance : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UBED_MovieNode_PerformerExitPhasePerformance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

