#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FunctionBinder_AudioSystem.generated.h"

UCLASS(Blueprintable)
class UFunctionBinder_AudioSystem : public UObject {
    GENERATED_BODY()
public:
    UFunctionBinder_AudioSystem();

private:
    UFUNCTION(BlueprintCallable)
    void RoomSetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
};

