#pragma once
#include "CoreMinimal.h"
#include "SkillMappingConditionType.generated.h"

UENUM(BlueprintType)
enum class SkillMappingConditionType : uint8 {
    Any,
    Buff,
    SurfaceType,
    InAttackWarning,
    Attr,
    Talent,
    CeilingHeight,
    TargetDistanceFar,
    SkillDirection,
    AttrInterval,
    EnumMax,
};

