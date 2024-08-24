#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_TriggerSkillEffect.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_TriggerSkillEffect : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectID;
    
    UBED_BehaviorNode_TriggerSkillEffect();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

