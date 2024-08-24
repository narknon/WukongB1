#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PlayerLockTrainDummyTarget.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_PlayerLockTrainDummyTarget : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_PlayerLockTrainDummyTarget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

