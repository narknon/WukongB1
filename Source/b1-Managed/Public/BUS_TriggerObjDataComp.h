#pragma once
#include "CoreMinimal.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_TriggerObjDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TriggerObjDataComp : public UBUS_InteractiveActorDataComp {
    GENERATED_BODY()
public:
    UBUS_TriggerObjDataComp(const FObjectInitializer& ObjectInitializer);

};

