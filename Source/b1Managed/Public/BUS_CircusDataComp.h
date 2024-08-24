#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_CircusDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CircusDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_CircusDataComp(const FObjectInitializer& ObjectInitializer);

};

