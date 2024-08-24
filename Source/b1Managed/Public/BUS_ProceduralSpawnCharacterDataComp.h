#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ProceduralSpawnCharacterDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralSpawnCharacterDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_ProceduralSpawnCharacterDataComp(const FObjectInitializer& ObjectInitializer);

};

