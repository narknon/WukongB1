#pragma once
#include "CoreMinimal.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_PlaceholderActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_PlaceholderActorDataComp : public UBUS_InteractiveActorDataComp {
    GENERATED_BODY()
public:
    UBUS_PlaceholderActorDataComp(const FObjectInitializer& ObjectInitializer);

};

