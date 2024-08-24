#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCSnapGroundRotationMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCSnapGroundRotationMode : uint8 {
    HitPointNormalProjected,
    CompXAxis,
};

