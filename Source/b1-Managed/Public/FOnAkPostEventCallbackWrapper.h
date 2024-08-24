#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnAkPostEventCallbackWrapper.generated.h"

class UAkCallbackInfo;

UCLASS(Blueprintable)
class UFOnAkPostEventCallbackWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnAkPostEventCallbackWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

