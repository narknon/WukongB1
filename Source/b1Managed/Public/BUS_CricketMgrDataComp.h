#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_CricketMgrDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CricketMgrDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_CricketMgrDataComp(const FObjectInitializer& ObjectInitializer);

};

