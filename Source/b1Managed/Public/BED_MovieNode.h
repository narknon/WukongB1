#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_MovieNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_MovieNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_MovieNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

