#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_CastSkill.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_CastSkill : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedCheckSkillCanCast: 1;
    
    UBED_ProcessStateNode_CastSkill();

};

