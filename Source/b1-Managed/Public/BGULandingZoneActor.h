#pragma once
#include "CoreMinimal.h"
#include "BGU_EQSPointRecorderActor.h"
#include "BGULandingZoneActor.generated.h"

UCLASS(Blueprintable)
class ABGULandingZoneActor : public ABGU_EQSPointRecorderActor {
    GENERATED_BODY()
public:
    ABGULandingZoneActor(const FObjectInitializer& ObjectInitializer);

};

