#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataTransformOperation.generated.h"

UENUM()
enum class EPCGMedadataTransformOperation : uint16 {
    Compose,
    Invert,
    Lerp,
};

