#pragma once
#include "CoreMinimal.h"
#include "BUS_TriggerBoxDataComp.h"
#include "BUS_AudioTriggerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AudioTriggerDataComp : public UBUS_TriggerBoxDataComp {
    GENERATED_BODY()
public:
    UBUS_AudioTriggerDataComp(const FObjectInitializer& ObjectInitializer);

};

