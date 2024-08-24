#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_WeaponDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_WeaponDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_WeaponDataComp(const FObjectInitializer& ObjectInitializer);

};

