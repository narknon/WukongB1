#pragma once
#include "CoreMinimal.h"
#include "EPCGDifferenceDensityFunction.generated.h"

UENUM(BlueprintType)
enum class EPCGDifferenceDensityFunction : uint8 {
    Minimum,
    ClampedSubstraction,
    Binary,
};

