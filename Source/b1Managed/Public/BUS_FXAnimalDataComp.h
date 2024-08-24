#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_FXAnimalDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FXAnimalDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_FXAnimalDataComp(const FObjectInitializer& ObjectInitializer);

};

