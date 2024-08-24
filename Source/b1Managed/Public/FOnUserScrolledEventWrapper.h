#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnUserScrolledEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnUserScrolledEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnUserScrolledEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(float CurrentOffset);
    
};

