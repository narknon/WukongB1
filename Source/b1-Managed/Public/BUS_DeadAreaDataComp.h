#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_DeadAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DeadAreaDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_DeadAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

