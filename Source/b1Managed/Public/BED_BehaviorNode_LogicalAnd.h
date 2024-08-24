#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_LogicalAnd.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_LogicalAnd : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_LogicalAnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};

