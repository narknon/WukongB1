#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUGateStateMachineActor.generated.h"

class UBUS_GateStateMachineConfigComp;

UCLASS(Blueprintable)
class ABGUGateStateMachineActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GateStateMachineConfigComp* GateStateMachineConfigComp;
    
    ABGUGateStateMachineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGateOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGateClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetToGateOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetToGateClose();
    
};

