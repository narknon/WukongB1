#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Condition.h"
#include "BED_BehaviorNode_DetectEnvironment.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_BehaviorNode_DetectEnvironment : public UBED_BehaviorNode_Condition {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_DetectEnvironment();

};

