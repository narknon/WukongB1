#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnMediaPlayerMediaEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnMediaPlayerMediaEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnMediaPlayerMediaEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

