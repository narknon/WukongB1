#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BGG_GameModeDataCompStartUp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGG_GameModeDataCompStartUp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBGG_GameModeDataCompStartUp(const FObjectInitializer& ObjectInitializer);

};

