#pragma once
#include "CoreMinimal.h"
#include "TriggerUnitFilter.generated.h"

UENUM(BlueprintType)
enum class TriggerUnitFilter : uint8 {
    WuKongOnly,
    WuKongTeam,
    SpecifiedResID,
    All,
};

