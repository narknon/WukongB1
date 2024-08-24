#pragma once
#include "CoreMinimal.h"
#include "EGSPointOnCircleSpacingMethod.generated.h"

UENUM(BlueprintType)
enum class EGSPointOnCircleSpacingMethod : uint8 {
    BySpaceBetween,
    ByNumberOfPoints,
};

