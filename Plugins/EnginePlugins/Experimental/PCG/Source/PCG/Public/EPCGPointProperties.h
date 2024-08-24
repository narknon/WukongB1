#pragma once
#include "CoreMinimal.h"
#include "EPCGPointProperties.generated.h"

UENUM(BlueprintType)
enum class EPCGPointProperties : uint8 {
    Density,
    BoundsMin,
    BoundsMax,
    Extents,
    Color,
    Position,
    Rotation,
    Scale,
    Transform,
    Steepness,
    LocalCenter,
    Seed,
};

