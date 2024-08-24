#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_ComboNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ComboNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_ComboNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

