#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_AiWeakInteractionDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AiWeakInteractionDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_AiWeakInteractionDataComp(const FObjectInitializer& ObjectInitializer);

};

