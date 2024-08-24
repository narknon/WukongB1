#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_NPCChangeIdleAnim.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_NPCChangeIdleAnim : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedChangeIdleAnimIdx;
    
public:
    UBED_ProcessStateNode_NPCChangeIdleAnim();

};

