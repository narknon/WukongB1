#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeNoiseMode.generated.h"

UENUM(BlueprintType)
enum class EPCGAttributeNoiseMode : uint8 {
    Set,
    Minimum,
    Maximum,
    Add,
    Multiply,
};

