#pragma once
#include "CoreMinimal.h"
#include "SpeedInterpMode.generated.h"

UENUM(BlueprintType)
enum class SpeedInterpMode : uint8 {
    ByPercentage,
    ByValue,
};

