#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_StateNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_StateNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_StateNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

