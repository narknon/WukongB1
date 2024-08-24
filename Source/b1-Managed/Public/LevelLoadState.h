#pragma once
#include "CoreMinimal.h"
#include "LevelLoadState.generated.h"

UENUM(BlueprintType)
enum class LevelLoadState : uint8 {
    Auto,
    Load,
    Unload,
};

