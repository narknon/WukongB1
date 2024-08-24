#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_ProcessNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ProcessNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_ProcessNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

