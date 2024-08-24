#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ProceduralMapGeneratorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralMapGeneratorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_ProceduralMapGeneratorDataComp(const FObjectInitializer& ObjectInitializer);

};

