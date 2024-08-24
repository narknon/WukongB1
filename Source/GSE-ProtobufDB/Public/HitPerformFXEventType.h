#pragma once
#include "CoreMinimal.h"
#include "HitPerformFXEventType.generated.h"

UENUM(BlueprintType)
enum class HitPerformFXEventType : uint8 {
    None,
    NormalHit,
    CritHit,
    SkillSurperArmorHit,
    ParryHit,
    BlockArmorHit,
    PerfectBlockArmorHit,
    SkillSurperArmorBreakHit,
    BlockArmorBreakHit,
    BlockArmorBreak2WeakHit,
    FrozenHit,
    FrozenBreakHit,
    ImmobilizedHit,
    ImmobilizedBreakHit,
    PartBreakHit,
    ShieldBlockHit,
    EnumMax,
};

