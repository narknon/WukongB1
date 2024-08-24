#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerCatchTarget.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerCatchTarget : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UBED_MovieNode_PerformerCatchTarget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

