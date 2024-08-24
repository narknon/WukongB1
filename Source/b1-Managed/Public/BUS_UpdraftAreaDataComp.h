#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_UpdraftAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_UpdraftAreaDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_UpdraftAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

