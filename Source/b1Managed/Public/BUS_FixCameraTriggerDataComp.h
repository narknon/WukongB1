#pragma once
#include "CoreMinimal.h"
#include "BUS_TriggerBoxDataComp.h"
#include "BUS_FixCameraTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FixCameraTriggerDataComp : public UBUS_TriggerBoxDataComp {
    GENERATED_BODY()
public:
    UBUS_FixCameraTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

