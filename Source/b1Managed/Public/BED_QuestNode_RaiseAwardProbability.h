#pragma once
#include "CoreMinimal.h"
#include "AwardProbabilityRaiseType.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_RaiseAwardProbability.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_RaiseAwardProbability : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AwardProbabilityRaiseType RaiseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanReduce: 1;
    
    UBED_QuestNode_RaiseAwardProbability();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

