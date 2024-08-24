#pragma once
#include "CoreMinimal.h"
#include "AutoTestPlayerCastSkillConditionGroup.h"
#include "BED_QuestNode.h"
#include "EBGUAutoTestPlayerComboKey.h"
#include "SkillDirection.h"
#include "BED_QuestNode_PlayerCastSkill.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_PlayerCastSkill : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUAutoTestPlayerComboKey ComboKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SkillDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoTestPlayerCastSkillConditionGroup> SkillCastConditions;
    
    UBED_QuestNode_PlayerCastSkill();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

