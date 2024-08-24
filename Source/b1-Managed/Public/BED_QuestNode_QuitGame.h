#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_QuitGame.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_QuitGame : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UBED_QuestNode_QuitGame();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

