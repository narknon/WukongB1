#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_NeutralFXAnimalSpawnPointDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_NeutralFXAnimalSpawnPointDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_NeutralFXAnimalSpawnPointDataComp(const FObjectInitializer& ObjectInitializer);

};

