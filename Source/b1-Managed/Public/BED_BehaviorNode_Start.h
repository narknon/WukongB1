#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_Start.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_BehaviorNode_Start : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_Start();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

