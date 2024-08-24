#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_ExecutionSequence.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ExecutionSequence : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UBED_TaskNode_ExecutionSequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};

