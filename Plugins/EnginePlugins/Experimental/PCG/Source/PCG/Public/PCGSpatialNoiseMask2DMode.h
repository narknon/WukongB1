#pragma once
#include "CoreMinimal.h"
#include "PCGSpatialNoiseMask2DMode.generated.h"

UENUM()
enum class PCGSpatialNoiseMask2DMode : int32 {
    Perlin,
    Caustic,
    FractionalBrownian,
};

