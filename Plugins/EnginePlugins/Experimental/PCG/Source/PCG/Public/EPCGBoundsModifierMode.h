#pragma once
#include "CoreMinimal.h"
#include "EPCGBoundsModifierMode.generated.h"

UENUM(BlueprintType)
enum class EPCGBoundsModifierMode : uint8 {
    Set,
    Intersect,
    Include,
    Translate,
    Scale,
};

