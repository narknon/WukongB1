#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_BGMVolumeDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BGMVolumeDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_BGMVolumeDataComp(const FObjectInitializer& ObjectInitializer);

};

