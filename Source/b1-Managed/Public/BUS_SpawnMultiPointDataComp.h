#pragma once
#include "CoreMinimal.h"
#include "BUS_FlowDataComp.h"
#include "BUS_SpawnMultiPointDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SpawnMultiPointDataComp : public UBUS_FlowDataComp {
    GENERATED_BODY()
public:
    UBUS_SpawnMultiPointDataComp(const FObjectInitializer& ObjectInitializer);

};

