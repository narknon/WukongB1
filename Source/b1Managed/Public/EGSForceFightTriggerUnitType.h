#pragma once
#include "CoreMinimal.h"
#include "EGSForceFightTriggerUnitType.generated.h"

UENUM(BlueprintType)
enum class EGSForceFightTriggerUnitType : uint8 {
    Default,
    TriggerConditionUnit,
    TriggerConditionUnitEnemy,
};

