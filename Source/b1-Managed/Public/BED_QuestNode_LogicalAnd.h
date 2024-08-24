#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_LogicalAnd.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_LogicalAnd : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_LogicalAnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};

