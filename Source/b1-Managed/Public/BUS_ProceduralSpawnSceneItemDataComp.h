#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ProceduralSpawnSceneItemDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralSpawnSceneItemDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_ProceduralSpawnSceneItemDataComp(const FObjectInitializer& ObjectInitializer);

};

