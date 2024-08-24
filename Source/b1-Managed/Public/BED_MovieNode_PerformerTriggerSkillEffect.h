#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerTriggerSkillEffect.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerTriggerSkillEffect : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillEffectID;
    
    UBED_MovieNode_PerformerTriggerSkillEffect();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

