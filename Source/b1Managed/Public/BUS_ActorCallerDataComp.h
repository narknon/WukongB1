#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ActorCallerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ActorCallerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_ActorCallerDataComp(const FObjectInitializer& ObjectInitializer);

};

