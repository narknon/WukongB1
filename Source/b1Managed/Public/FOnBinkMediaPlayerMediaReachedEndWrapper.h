#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnBinkMediaPlayerMediaReachedEndWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnBinkMediaPlayerMediaReachedEndWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnBinkMediaPlayerMediaReachedEndWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

