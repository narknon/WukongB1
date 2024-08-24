#pragma once
#include "CoreMinimal.h"
#include "EPCGIntersectionDensityFunction.generated.h"

UENUM(BlueprintType)
enum class EPCGIntersectionDensityFunction : uint8 {
    Multiply,
    Minimum,
};

