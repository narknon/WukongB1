#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_Sequence.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_Sequence : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_Sequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};

