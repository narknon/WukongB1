#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCScalarNoiseMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCScalarNoiseMode : uint8 {
    NoNoise,
    Sin,
    PerlinNoise,
};

