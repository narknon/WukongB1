#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_Condition.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_BehaviorNode_Condition : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverseCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionCoolDownTimeMs;
    
    UBED_BehaviorNode_Condition();

};

