#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_GateStateMachineDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GateStateMachineDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_GateStateMachineDataComp(const FObjectInitializer& ObjectInitializer);

};

