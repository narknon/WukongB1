#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PlayerMoveToTrainDummyTarget.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_PlayerMoveToTrainDummyTarget : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveFinishDistance;
    
    UBED_QuestNode_PlayerMoveToTrainDummyTarget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

