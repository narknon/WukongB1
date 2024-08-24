#pragma once
#include "CoreMinimal.h"
#include "SPAWN_BASE_LOCATION.generated.h"

UENUM(BlueprintType)
enum class SPAWN_BASE_LOCATION : uint8 {
    BASE_ON_DEFAULT,
    BASE_ON_SPECIFIC_WAVE_DEAD,
    BASE_ON_PLAYER,
};

