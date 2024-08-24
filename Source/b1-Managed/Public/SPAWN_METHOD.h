#pragma once
#include "CoreMinimal.h"
#include "SPAWN_METHOD.generated.h"

UENUM(BlueprintType)
enum class SPAWN_METHOD : uint8 {
    SPAWN_ON_START,
    SPAWN_ON_WAVE,
    SPAWN_ON_TRIGGER_RANGE,
};

