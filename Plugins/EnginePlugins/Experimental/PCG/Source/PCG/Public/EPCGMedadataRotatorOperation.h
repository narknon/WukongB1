#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataRotatorOperation.generated.h"

UENUM()
enum class EPCGMedadataRotatorOperation : uint16 {
    RotatorOp,
    Combine,
    Invert,
    Lerp,
    Normalize,
    TransformOp = 100,
    TransformRotation,
    InverseTransformRotation,
};

