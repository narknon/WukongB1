#pragma once
#include "CoreMinimal.h"
#include "SPAWN_CONDITION.generated.h"

UENUM(BlueprintType)
enum class SPAWN_CONDITION : uint8 {
    SPAWN_ON_DEFALUT,
    SPAWN_ON_ALL_DEAD,
    SPAWN_ON_DEAD_PERCENTAGE,
    SPAWN_ON_RANDOM,
};

