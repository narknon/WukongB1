#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_IntervalTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_IntervalTriggerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_IntervalTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

