#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineSamplingInteriorOrientation.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineSamplingInteriorOrientation : uint8 {
    Uniform,
    FollowCurvature,
};

