#pragma once
#include "CoreMinimal.h"
#include "FluidSimDimension.generated.h"

UENUM(BlueprintType)
enum class FluidSimDimension : uint8 {
    Vol_32_3,
    Vol_64_3,
    Vol_100_3,
    Vol_128_3,
    Vol_196_3,
    Vol_256_3,
    Vol_324_3,
    Vol_400_3,
};

