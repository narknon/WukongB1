#pragma once
#include "CoreMinimal.h"
#include "SelectTargetTypeFilter.generated.h"

UENUM(BlueprintType)
enum class SelectTargetTypeFilter : uint8 {
    None,
    Character,
    Bullet,
    MagicField = 4,
    DestructibleActor = 8,
};

