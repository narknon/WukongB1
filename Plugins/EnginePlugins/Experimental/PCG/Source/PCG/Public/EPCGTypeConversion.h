#pragma once
#include "CoreMinimal.h"
#include "EPCGTypeConversion.generated.h"

UENUM(BlueprintType)
enum class EPCGTypeConversion : uint8 {
    NoConversionRequired,
    CollapseToPoint,
    Filter,
    MakeConcrete,
    Failed,
};

