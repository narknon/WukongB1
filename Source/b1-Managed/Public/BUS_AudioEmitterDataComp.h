#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_AudioEmitterDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AudioEmitterDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_AudioEmitterDataComp(const FObjectInitializer& ObjectInitializer);

};

