#pragma once
#include "CoreMinimal.h"
#include "EPCGTransformLerpMode.generated.h"

UENUM()
enum class EPCGTransformLerpMode : uint16 {
    QuatInterp,
    EulerInterp,
    DualQuatInterp,
};

