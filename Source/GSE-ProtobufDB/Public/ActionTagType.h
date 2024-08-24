#pragma once
#include "CoreMinimal.h"
#include "ActionTagType.generated.h"

UENUM(BlueprintType)
enum class ActionTagType : uint8 {
    NormalMove,
    Damage,
    NormalSkillCast,
    RootMotion,
    DontUpdate,
    MovingSkill,
    KeepFacing,
    Aoe,
    SingleSkill,
    MeleeSkill,
    RangedSkill,
    NormalAttack,
    Skill,
    Control,
    Heal,
    Own,
    Other,
    RotationLock,
};

