#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_FSMNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_FSMNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_FSMNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

