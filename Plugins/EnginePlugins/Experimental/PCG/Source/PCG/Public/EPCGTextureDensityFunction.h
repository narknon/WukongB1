#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureDensityFunction.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureDensityFunction : uint8 {
    Ignore,
    Multiply,
};

