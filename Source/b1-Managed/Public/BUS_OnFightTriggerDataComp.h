#pragma once
#include "CoreMinimal.h"
#include "BUS_TriggerBoxDataComp.h"
#include "BUS_OnFightTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_OnFightTriggerDataComp : public UBUS_TriggerBoxDataComp {
    GENERATED_BODY()
public:
    UBUS_OnFightTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

