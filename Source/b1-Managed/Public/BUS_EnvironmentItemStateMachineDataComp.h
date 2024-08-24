#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_EnvironmentItemStateMachineDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_EnvironmentItemStateMachineDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_EnvironmentItemStateMachineDataComp(const FObjectInitializer& ObjectInitializer);

};

