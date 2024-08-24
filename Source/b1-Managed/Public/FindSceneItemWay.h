#pragma once
#include "CoreMinimal.h"
#include "FindSceneItemWay.generated.h"

UENUM(BlueprintType)
enum class FindSceneItemWay : uint8 {
    FindNearest,
    FindFurthest,
    FindMinTotalAngle,
    Composite,
    CompositeV2,
    FindNearestToTarget,
    FindFurthestToTarget,
    ClosestOutsideTheAngle,
    FarthestOutsideTheAngle,
};

