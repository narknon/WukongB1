#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FWidgetAnimationDynamicEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFWidgetAnimationDynamicEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFWidgetAnimationDynamicEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

