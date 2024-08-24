#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_SplineDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SplineDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_SplineDataComp(const FObjectInitializer& ObjectInitializer);

};

