#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_LogicalOr.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_LogicalOr : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_LogicalOr();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};

