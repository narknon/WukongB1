#pragma once
#include "CoreMinimal.h"
#include "BUS_ProjectileBaseDataComp.h"
#include "BUS_MagicFieldDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_MagicFieldDataComp : public UBUS_ProjectileBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_MagicFieldDataComp(const FObjectInitializer& ObjectInitializer);

};

