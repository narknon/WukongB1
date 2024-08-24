#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_UpdraftDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_UpdraftDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_UpdraftDataComp(const FObjectInitializer& ObjectInitializer);

};

