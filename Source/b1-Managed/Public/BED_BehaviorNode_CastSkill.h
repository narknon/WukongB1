#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_CastSkill.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_CastSkill : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedCheckSkillCanCast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageStartSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanCastWhenDead: 1;
    
    UBED_BehaviorNode_CastSkill();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

