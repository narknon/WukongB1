#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineSamplingMode.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineSamplingMode : uint8 {
    Subdivision,
    Distance,
};

