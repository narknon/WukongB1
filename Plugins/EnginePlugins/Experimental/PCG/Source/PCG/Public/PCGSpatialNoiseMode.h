#pragma once
#include "CoreMinimal.h"
#include "PCGSpatialNoiseMode.generated.h"

UENUM()
enum class PCGSpatialNoiseMode : int32 {
    Perlin2D,
    Caustic2D,
    Voronoi2D,
    FractionalBrownian2D,
    EdgeMask2D,
};

