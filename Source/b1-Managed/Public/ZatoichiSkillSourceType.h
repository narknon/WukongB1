#pragma once
#include "CoreMinimal.h"
#include "ZatoichiSkillSourceType.generated.h"

UENUM(BlueprintType)
enum class ZatoichiSkillSourceType : uint8 {
    None,
    UseWithSkillCategory,
    UseWithGroupAI,
    UseWithSurpriseSkilll,
    UseWithAvoidObstacle,
    UseWithStalemateSkill,
};

