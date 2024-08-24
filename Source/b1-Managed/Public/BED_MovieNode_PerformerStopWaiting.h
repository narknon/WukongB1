#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerStopWaiting.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerStopWaiting : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UBED_MovieNode_PerformerStopWaiting();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

