#pragma once
#include "CoreMinimal.h"
#include "SpawnerState.generated.h"

UENUM(BlueprintType)
enum class SpawnerState : uint8 {
    Disabled,
    Enabled,
    Spawned,
};

