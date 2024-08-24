#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineSamplingDimension.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineSamplingDimension : uint8 {
    OnSpline,
    OnHorizontal,
    OnVertical,
    OnVolume,
    OnInterior,
};

