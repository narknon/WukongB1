#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_DialogueProxyDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DialogueProxyDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_DialogueProxyDataComp(const FObjectInitializer& ObjectInitializer);

};

