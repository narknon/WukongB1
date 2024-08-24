#pragma once
#include "CoreMinimal.h"
#include "TransformBySplineRotateType.generated.h"

UENUM(BlueprintType)
enum class TransformBySplineRotateType : uint8 {
    RotateToSplineTangentByTargetSide,
    RotateToSplineTangentByCurSide,
    RotateToSplineTangent,
    RotateToTarget,
    EnumMax,
};

