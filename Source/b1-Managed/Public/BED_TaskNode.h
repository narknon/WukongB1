#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_TaskNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_TaskNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_TaskNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

