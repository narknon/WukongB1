#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "GateStateMachineType.h"
#include "BUS_GateStateMachineConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GateStateMachineConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartWithClosed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ManualStateControl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GateStateMachineType GateStateMachineType;
    
    UBUS_GateStateMachineConfigComp(const FObjectInitializer& ObjectInitializer);

};

