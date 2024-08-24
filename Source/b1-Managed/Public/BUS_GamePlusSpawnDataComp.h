#pragma once
#include "CoreMinimal.h"
#include "BUS_FlowDataComp.h"
#include "BUS_GamePlusSpawnDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GamePlusSpawnDataComp : public UBUS_FlowDataComp {
    GENERATED_BODY()
public:
    UBUS_GamePlusSpawnDataComp(const FObjectInitializer& ObjectInitializer);

};

