#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "QueryGameStateCondition.h"
#include "BED_QuestNode_QueryGameState.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_QueryGameState : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    QueryGameStateCondition QueryCondition;
    
    UBED_QuestNode_QueryGameState();

};

