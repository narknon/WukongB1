#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_BackToCheckPoint.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_QuestNode_BackToCheckPoint : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPointId;
    
    UBED_QuestNode_BackToCheckPoint();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

