#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataVectorOperation.generated.h"

UENUM()
enum class EPCGMedadataVectorOperation : uint16 {
    VectorOp,
    Cross,
    Dot,
    Distance,
    Normalize,
    Length,
    RotateAroundAxis,
    TransformOp = 100,
    TransformDirection,
    TransformLocation,
    InverseTransformDirection,
    InverseTransformLocation,
};

