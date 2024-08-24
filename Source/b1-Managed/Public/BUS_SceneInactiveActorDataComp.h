#pragma once
#include "CoreMinimal.h"
#include "BUS_FXDataComp.h"
#include "BUS_SceneInactiveActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SceneInactiveActorDataComp : public UBUS_FXDataComp {
    GENERATED_BODY()
public:
    UBUS_SceneInactiveActorDataComp(const FObjectInitializer& ObjectInitializer);

};

