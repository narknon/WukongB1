#pragma once
#include "CoreMinimal.h"
#include "BUS_TriggerBoxDataComp.h"
#include "BUS_ActionTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ActionTriggerDataComp : public UBUS_TriggerBoxDataComp {
    GENERATED_BODY()
public:
    UBUS_ActionTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

