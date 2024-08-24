#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAdvProcessFLinearColorMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAdvProcessFLinearColorMode : uint8 {
    Standard,
    RandomAlphaOnSpawn,
    RandomAlpha,
    UCurve,
};

