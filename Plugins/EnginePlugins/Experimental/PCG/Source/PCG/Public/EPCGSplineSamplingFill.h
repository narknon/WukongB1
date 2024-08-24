#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineSamplingFill.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineSamplingFill : uint8 {
    Fill,
    EdgesOnly,
};

