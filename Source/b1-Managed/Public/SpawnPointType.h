#pragma once
#include "CoreMinimal.h"
#include "SpawnPointType.generated.h"

UENUM(BlueprintType)
enum class SpawnPointType : uint8 {
    UseSpawnPoints,
    UseEQS,
    UseLocalSpaceOffset,
};

