#pragma once
#include "CoreMinimal.h"
#include "EPCGPointExtentsModifierMode.generated.h"

UENUM(BlueprintType)
enum class EPCGPointExtentsModifierMode : uint8 {
    Set,
    Minimum,
    Maximum,
    Add,
    Multiply,
};

