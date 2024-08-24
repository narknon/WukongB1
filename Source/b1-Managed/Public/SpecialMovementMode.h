#pragma once
#include "CoreMinimal.h"
#include "SpecialMovementMode.generated.h"

UENUM(BlueprintType)
enum class SpecialMovementMode : uint8 {
    GroundMove,
    AirMove,
    GlideMove,
    ParkourMove,
    WallMove,
    FlyMove,
    SplineMove,
};

