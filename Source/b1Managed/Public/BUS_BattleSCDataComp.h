#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_BattleSCDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BattleSCDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_BattleSCDataComp(const FObjectInitializer& ObjectInitializer);

};

