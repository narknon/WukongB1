#pragma once
#include "CoreMinimal.h"
#include "EPCGDifferenceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGDifferenceMode : uint8 {
    Inferred,
    Continuous,
    Discrete,
};

