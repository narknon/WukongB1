#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_TrainDummyMgrDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TrainDummyMgrDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_TrainDummyMgrDataComp(const FObjectInitializer& ObjectInitializer);

};

