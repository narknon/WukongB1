#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_CutDeathDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CutDeathDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_CutDeathDataComp(const FObjectInitializer& ObjectInitializer);

};

