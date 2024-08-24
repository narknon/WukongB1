#pragma once
#include "CoreMinimal.h"
#include "PointTestType.generated.h"

UENUM(BlueprintType)
enum class PointTestType : uint8 {
    CheckAngle,
    SkillArea,
    Distance,
    SkillCastRange,
    CharacterBlock,
    NavPathExist,
    Visible,
    Height,
};

