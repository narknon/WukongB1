#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnCheckBoxComponentStateChangedWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnCheckBoxComponentStateChangedWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnCheckBoxComponentStateChangedWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(bool bIsChecked);
    
};

