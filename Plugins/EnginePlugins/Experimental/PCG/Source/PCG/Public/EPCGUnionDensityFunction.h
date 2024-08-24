#pragma once
#include "CoreMinimal.h"
#include "EPCGUnionDensityFunction.generated.h"

UENUM(BlueprintType)
enum class EPCGUnionDensityFunction : uint8 {
    Maximum,
    ClampedAddition,
    Binary,
};

