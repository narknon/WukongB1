#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAdvProcessScalarMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAdvProcessScalarMode : uint8 {
    Standard,
    RandomOnSpawn,
    Random,
    UCurve,
};

