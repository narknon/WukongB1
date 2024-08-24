#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BGG_GameModeDataCompB1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGG_GameModeDataCompB1 : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBGG_GameModeDataCompB1(const FObjectInitializer& ObjectInitializer);

};

