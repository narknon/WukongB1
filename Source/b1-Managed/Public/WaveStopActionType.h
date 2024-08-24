#pragma once
#include "CoreMinimal.h"
#include "WaveStopActionType.generated.h"

UENUM(BlueprintType)
enum class WaveStopActionType : uint8 {
    DestroyAllSpawnedUnits,
    SpawnedUnitsReturnHome,
};

