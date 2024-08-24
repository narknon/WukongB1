#pragma once
#include "CoreMinimal.h"
#include "BGUEnvironmentItemStateMachineActorBase.h"
#include "EnvironmentItemStateMachineExtAbilityMask.h"
#include "BGUEnvironmentItemStateMachineActor.generated.h"

class UBUS_EnvironmentItemStateMachineComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUEnvironmentItemStateMachineActor : public ABGUEnvironmentItemStateMachineActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_EnvironmentItemStateMachineComp* EnvironmentItemStateMachineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvironmentItemStateMachineExtAbilityMask ExtAbilityMask;
    
    ABGUEnvironmentItemStateMachineActor(const FObjectInitializer& ObjectInitializer);

};

