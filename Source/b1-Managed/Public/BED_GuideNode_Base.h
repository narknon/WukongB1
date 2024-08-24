#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_GuideNode_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_GuideNode_Base : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_GuideNode_Base();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

