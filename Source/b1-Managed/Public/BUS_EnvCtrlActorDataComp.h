#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_EnvCtrlActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_EnvCtrlActorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_EnvCtrlActorDataComp(const FObjectInitializer& ObjectInitializer);

};

