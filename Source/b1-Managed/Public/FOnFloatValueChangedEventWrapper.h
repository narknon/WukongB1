#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnFloatValueChangedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnFloatValueChangedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnFloatValueChangedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(float Value);
    
};

