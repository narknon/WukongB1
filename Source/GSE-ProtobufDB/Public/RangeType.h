#pragma once
#include "CoreMinimal.h"
#include "RangeType.generated.h"

UENUM(BlueprintType)
enum class RangeType : uint8 {
    TargetBaseObj,
    Circle,
    Rect,
    Cylinder,
    Sphere,
    Sector,
    ForwardRect,
    Ring,
    AnnularSector,
    VelocityDirSphere,
    MultiTargetTurn,
    GroupTarget,
    FamilyTarget,
};

