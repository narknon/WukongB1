#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_TortoiseMoveMgrActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TortoiseMoveMgrActorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_TortoiseMoveMgrActorDataComp(const FObjectInitializer& ObjectInitializer);

};

