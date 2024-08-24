#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnIsSelectingKeyChangedWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnIsSelectingKeyChangedWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnIsSelectingKeyChangedWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

