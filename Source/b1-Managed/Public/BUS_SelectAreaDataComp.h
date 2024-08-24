#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_SelectAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SelectAreaDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_SelectAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

