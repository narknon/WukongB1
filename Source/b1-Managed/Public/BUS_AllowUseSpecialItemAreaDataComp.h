#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_AllowUseSpecialItemAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AllowUseSpecialItemAreaDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_AllowUseSpecialItemAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

