#pragma once
#include "CoreMinimal.h"
#include "DamageReason.generated.h"

UENUM(BlueprintType)
enum class DamageReason : uint8 {
    None,
    Buff,
    Skill,
    FallDmg,
    DeadZone,
};

