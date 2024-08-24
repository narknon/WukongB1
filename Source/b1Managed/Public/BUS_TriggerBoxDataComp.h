#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_TriggerBoxDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TriggerBoxDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_TriggerBoxDataComp(const FObjectInitializer& ObjectInitializer);

};

