#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_ExecutionSequence.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_ExecutionSequence : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_ExecutionSequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};

