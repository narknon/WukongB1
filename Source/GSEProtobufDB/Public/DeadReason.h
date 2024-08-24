#pragma once
#include "CoreMinimal.h"
#include "DeadReason.generated.h"

UENUM(BlueprintType)
enum class DeadReason : uint8 {
    None,
    SummonDead,
    SkillDamage,
    OnlyDestroyUnit,
    Fracture,
    FlyHit,
    Cut,
    DeadZone,
    Suicide,
    FrozenFracture,
    PlayerTrans,
    FallDead,
    EnumMax = 255,
};

