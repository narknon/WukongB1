#pragma once
#include "CoreMinimal.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_DropItemDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DropItemDataComp : public UBUS_InteractiveActorDataComp {
    GENERATED_BODY()
public:
    UBUS_DropItemDataComp(const FObjectInitializer& ObjectInitializer);

};

