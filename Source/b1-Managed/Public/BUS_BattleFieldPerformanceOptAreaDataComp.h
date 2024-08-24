#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_BattleFieldPerformanceOptAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BattleFieldPerformanceOptAreaDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_BattleFieldPerformanceOptAreaDataComp(const FObjectInitializer& ObjectInitializer);

};

