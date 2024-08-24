#pragma once
#include "CoreMinimal.h"
#include "BUS_FXDataComp.h"
#include "BUS_LightningFXActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_LightningFXActorDataComp : public UBUS_FXDataComp {
    GENERATED_BODY()
public:
    UBUS_LightningFXActorDataComp(const FObjectInitializer& ObjectInitializer);

};

