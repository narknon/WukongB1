#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "DispLibDispWorldDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDispLibDispWorldDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UDispLibDispWorldDataComp(const FObjectInitializer& ObjectInitializer);

};

