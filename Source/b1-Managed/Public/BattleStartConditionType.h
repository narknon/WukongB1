#pragma once
#include "CoreMinimal.h"
#include "BattleStartConditionType.generated.h"

UENUM(BlueprintType)
enum class BattleStartConditionType : uint8 {
    Auto,
    UnitActive,
    SpawnerActive,
    EnterOverlap,
};

