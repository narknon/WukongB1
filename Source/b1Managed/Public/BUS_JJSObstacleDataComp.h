#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_JJSObstacleDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_JJSObstacleDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_JJSObstacleDataComp(const FObjectInitializer& ObjectInitializer);

};

