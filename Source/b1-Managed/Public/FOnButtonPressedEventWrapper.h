#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnButtonPressedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnButtonPressedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnButtonPressedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

