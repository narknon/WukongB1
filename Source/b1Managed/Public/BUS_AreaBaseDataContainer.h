#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_AreaBaseDataContainer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AreaBaseDataContainer : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_AreaBaseDataContainer(const FObjectInitializer& ObjectInitializer);

};

