#pragma once
#include "CoreMinimal.h"
#include "HitOrientationType.generated.h"

UENUM(BlueprintType)
enum class HitOrientationType : uint8 {
    None,
    TowardAttacker,
    TowardAttackDirection,
    BackToAttacker,
    BackToAttackDirection,
    BackToCaster,
    TowardCaster,
    LaserType,
    SameWithAttacker,
};

