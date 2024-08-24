#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_FXDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FXDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_FXDataComp(const FObjectInitializer& ObjectInitializer);

};

