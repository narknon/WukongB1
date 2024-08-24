#pragma once
#include "CoreMinimal.h"
#include "SkillDamageType.generated.h"

UENUM(BlueprintType)
enum class SkillDamageType : uint8 {
    NoneEffectAtk,
    BluntAtk,
    SharpAtk,
    BurnAtk,
    ExplosionAtk,
    FreezeAtk,
    LightningAtk,
    PoisonAtk,
    EnumMax,
};

