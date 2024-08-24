#pragma once
#include "CoreMinimal.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_RebirthPointDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_RebirthPointDataComp : public UBUS_InteractiveActorDataComp {
    GENERATED_BODY()
public:
    UBUS_RebirthPointDataComp(const FObjectInitializer& ObjectInitializer);

};

