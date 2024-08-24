#pragma once
#include "CoreMinimal.h"
#include "FilterType.generated.h"

UENUM(BlueprintType)
enum class FilterType : uint8 {
    CheckAngle,
    SkillArea,
    SkillCastRange,
    CharacterBlock,
    NavPathExist,
    Visible,
    Height,
    Distance,
    Score,
    Team,
    PointsGen,
    UnitState,
    FixedDistance,
    Hppercent,
    InNavMesh,
    ValidSkill,
    UnitResId,
    FeatureDesc,
};

