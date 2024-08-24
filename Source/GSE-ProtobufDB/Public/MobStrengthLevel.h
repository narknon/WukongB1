#pragma once
#include "CoreMinimal.h"
#include "MobStrengthLevel.generated.h"

UENUM(BlueprintType)
enum class MobStrengthLevel : uint8 {
    LevelWeak,
    LevelModerate,
    LevelStrong,
    LevelSpecial,
};

