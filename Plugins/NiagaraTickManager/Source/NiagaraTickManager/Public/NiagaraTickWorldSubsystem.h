#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "NiagaraTickWorldSubsystem.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class NIAGARATICKMANAGER_API UNiagaraTickWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UNiagaraTickWorldSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnComponentActivated(UActorComponent* Component, bool bReset);
    
};

