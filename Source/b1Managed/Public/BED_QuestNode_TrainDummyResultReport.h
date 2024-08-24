#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "GsActorGuidReference.h"
#include "BED_QuestNode_TrainDummyResultReport.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_TrainDummyResultReport : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsActorGuidReference TrainDummyMgrActor;
    
    UBED_QuestNode_TrainDummyResultReport();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

