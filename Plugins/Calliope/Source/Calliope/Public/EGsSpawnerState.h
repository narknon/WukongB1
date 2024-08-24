#pragma once
#include "CoreMinimal.h"
#include "EGsSpawnerState.generated.h"

UENUM(BlueprintType)
enum class EGsSpawnerState : uint8 {
    Disabled,
    Enabled,
    Spawned,
};

