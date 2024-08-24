#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_GamePass.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_GamePass : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_GamePass();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};
