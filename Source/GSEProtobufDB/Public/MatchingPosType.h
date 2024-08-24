#pragma once
#include "CoreMinimal.h"
#include "MatchingPosType.generated.h"

UENUM(BlueprintType)
enum class MatchingPosType : uint8 {
    None,
    InterpolationLiner,
    FlyTrajectoryUseBezier,
    Teleport,
    OnlyRotation,
    EnumMax,
};

