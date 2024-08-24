#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_SDFMakerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SDFMakerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_SDFMakerDataComp(const FObjectInitializer& ObjectInitializer);

};

