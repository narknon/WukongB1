#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_IntervalTriggerAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_IntervalTriggerAreaDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_IntervalTriggerAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

