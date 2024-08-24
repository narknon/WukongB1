#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_DroppedItemManagerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DroppedItemManagerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_DroppedItemManagerDataComp(const FObjectInitializer& ObjectInitializer);

};

