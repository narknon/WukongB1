#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/Object.h"
#include "AudioTriggerCompFunctionBinder.generated.h"

class UAkCallbackInfo;

UCLASS(Blueprintable)
class UAudioTriggerCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UAudioTriggerCompFunctionBinder();

protected:
    UFUNCTION(BlueprintCallable)
    void AudioCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

