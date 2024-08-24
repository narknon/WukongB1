#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_SetPlayerRebirthPoint.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_SetPlayerRebirthPoint : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebirthPointId;
    
    UBED_QuestNode_SetPlayerRebirthPoint();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

