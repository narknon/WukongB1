#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BPS_ReplayPlayerControllerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBPS_ReplayPlayerControllerDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBPS_ReplayPlayerControllerDataComp(const FObjectInitializer& ObjectInitializer);

};

