#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_DumperTruckTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DumperTruckTriggerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_DumperTruckTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

