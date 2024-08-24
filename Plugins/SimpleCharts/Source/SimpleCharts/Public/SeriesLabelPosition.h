#pragma once
#include "CoreMinimal.h"
#include "SeriesLabelPosition.generated.h"

UENUM(BlueprintType)
enum class SeriesLabelPosition : uint8 {
    inside,
    top,
    bottom,
    left,
    right,
};

