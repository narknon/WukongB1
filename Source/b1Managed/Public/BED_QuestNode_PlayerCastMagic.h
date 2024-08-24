#pragma once
#include "CoreMinimal.h"
#include "AutoTestPlayerCastSkillConditionGroup.h"
#include "BED_QuestNode.h"
#include "EBGUAutoTestPlayerMagicType.h"
#include "SkillDirection.h"
#include "BED_QuestNode_PlayerCastMagic.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_PlayerCastMagic : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUAutoTestPlayerMagicType CastType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SkillDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoTestPlayerCastSkillConditionGroup> SkillCastConditions;
    
    UBED_QuestNode_PlayerCastMagic();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

