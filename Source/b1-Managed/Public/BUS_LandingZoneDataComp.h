#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_LandingZoneDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_LandingZoneDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_LandingZoneDataComp(const FObjectInitializer& ObjectInitializer);

};

