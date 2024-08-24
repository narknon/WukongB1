#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveType.generated.h"

UENUM(BlueprintType)
enum class SpawnWaveType : uint8 {
    SpawnSequence,
    SpawnInfinite,
};

