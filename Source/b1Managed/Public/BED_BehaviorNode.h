#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_BehaviorNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_BehaviorNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_BehaviorNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

