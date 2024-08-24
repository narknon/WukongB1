#pragma once
#include "CoreMinimal.h"
#include "TamerStrategyArea.generated.h"

UENUM(BlueprintType)
enum class TamerStrategyArea : uint8 {
    None,
    SuspendedSculptures,
    Dungeon,
};

