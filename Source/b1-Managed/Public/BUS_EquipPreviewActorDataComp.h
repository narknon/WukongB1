#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_EquipPreviewActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_EquipPreviewActorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_EquipPreviewActorDataComp(const FObjectInitializer& ObjectInitializer);

};

