#pragma once
#include "CoreMinimal.h"
#include "BUS_TriggerBoxDataComp.h"
#include "BUS_StealthTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_StealthTriggerDataComp : public UBUS_TriggerBoxDataComp {
    GENERATED_BODY()
public:
    UBUS_StealthTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

