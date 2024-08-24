#pragma once
#include "CoreMinimal.h"
#include "AutoTestPlayerCastSkillConditionGroup.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PlayerCondition.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_PlayerCondition : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoTestPlayerCastSkillConditionGroup> ConditionConfigs;
    
    UBED_QuestNode_PlayerCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

