#pragma once
#include "CoreMinimal.h"
#include "BUS_ProjectileBaseDataComp.h"
#include "BUS_BulletDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BulletDataComp : public UBUS_ProjectileBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_BulletDataComp(const FObjectInitializer& ObjectInitializer);

};

