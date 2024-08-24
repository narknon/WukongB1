#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnButtonClickedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnButtonClickedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnButtonClickedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

