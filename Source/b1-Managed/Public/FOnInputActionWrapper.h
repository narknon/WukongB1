#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnInputActionWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnInputActionWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnInputActionWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

