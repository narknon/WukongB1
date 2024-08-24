#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BPS_PlayerControllerDataCompB1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBPS_PlayerControllerDataCompB1 : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBPS_PlayerControllerDataCompB1(const FObjectInitializer& ObjectInitializer);

};

