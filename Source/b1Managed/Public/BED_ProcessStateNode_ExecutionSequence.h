#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_ExecutionSequence.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_ExecutionSequence : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UBED_ProcessStateNode_ExecutionSequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};

