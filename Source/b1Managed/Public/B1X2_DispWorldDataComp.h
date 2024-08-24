#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "B1X2_DispWorldDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UB1X2_DispWorldDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UB1X2_DispWorldDataComp(const FObjectInitializer& ObjectInitializer);

};

