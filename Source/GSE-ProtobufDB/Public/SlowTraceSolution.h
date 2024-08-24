#pragma once
#include "CoreMinimal.h"
#include "SlowTraceSolution.generated.h"

UENUM(BlueprintType)
enum class SlowTraceSolution : uint8 {
    None,
    Distance,
    Angle,
    EnumMax = 10,
};

