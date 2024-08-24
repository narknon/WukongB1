#pragma once
#include "CoreMinimal.h"
#include "SkillType.generated.h"

UENUM(BlueprintType)
enum class SkillType : uint8 {
    NormalSkill,
    HurtSkill,
    ChargeSkillBegin = 8,
    ChargeSkillEnd,
    RollSkill,
    NoMontageSkill = 14,
    UseItemSkill,
    VigorSkill,
    CloudSkill,
    EnumMax = 255,
};

