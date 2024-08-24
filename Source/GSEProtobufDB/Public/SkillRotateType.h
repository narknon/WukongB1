#pragma once
#include "CoreMinimal.h"
#include "SkillRotateType.generated.h"

UENUM(BlueprintType)
enum class SkillRotateType : uint8 {
    None,
    MeleeRotate,
    Shooting,
    Roll,
    Qteprepare,
    Qtedoing,
    RotateToCamera,
    RotateToTargetInstantly,
};

