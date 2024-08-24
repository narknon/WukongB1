#pragma once
#include "CoreMinimal.h"
#include "EPCGDebugVisScaleMethod.generated.h"

UENUM(BlueprintType)
enum class EPCGDebugVisScaleMethod : uint8 {
    Relative,
    Absolute,
    Extents,
};

