#pragma once
#include "CoreMinimal.h"
#include "GsSmartParamArray.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_StopWaveSpawnByChallenge.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_StopWaveSpawnByChallenge : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParamArray SpawnerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeId;
    
    UBED_QuestNode_StopWaveSpawnByChallenge();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

