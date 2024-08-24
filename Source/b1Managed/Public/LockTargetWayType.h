#pragma once
#include "CoreMinimal.h"
#include "LockTargetWayType.generated.h"

UENUM(BlueprintType)
enum class LockTargetWayType : uint8 {
    Auto,
    Manual,
    Skill,
    Combo,
    AimOffset,
    MoveTo,
};

