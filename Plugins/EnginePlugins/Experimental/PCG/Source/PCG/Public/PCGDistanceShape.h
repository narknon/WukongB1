#pragma once
#include "CoreMinimal.h"
#include "PCGDistanceShape.generated.h"

UENUM()
enum class PCGDistanceShape : int32 {
    SphereBounds,
    BoxBounds,
    Center,
};

