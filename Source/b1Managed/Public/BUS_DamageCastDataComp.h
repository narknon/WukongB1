#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_DamageCastDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DamageCastDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_DamageCastDataComp(const FObjectInitializer& ObjectInitializer);

};

