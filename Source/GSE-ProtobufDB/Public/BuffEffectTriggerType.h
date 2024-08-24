#pragma once
#include "CoreMinimal.h"
#include "BuffEffectTriggerType.generated.h"

UENUM(BlueprintType)
enum class BuffEffectTriggerType : uint8 {
    None,
    Generation,
    Time,
    Remove,
    CasterDead,
    Dead,
    LayerMax,
    BeAttacked,
    OnSkillBreak,
    IntoChargeEnd,
    OnCriticalHit,
    OnKillUnit,
    SkillCostOnceDmg,
    OnShieldBreak,
    OnSkillDamage,
    BeHurted,
    BeHurtedNoneElem,
    BeHurtedFreeze,
    BeHurtedBurn,
    BeHurtedPoison,
    BeHurtedThunder,
    BeHurtedYin,
    BeHurtedYang,
    EnumMax,
};

