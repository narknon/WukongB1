#pragma once
#include "CoreMinimal.h"
#include "HitActionDir.generated.h"

UENUM(BlueprintType)
enum class HitActionDir : uint8 {
    Default,
    Up,
    Down,
    Left,
    Right,
    Front,
    Back,
    EnumMax,
};

