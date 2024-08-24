#pragma once
#include "CoreMinimal.h"
#include "SuitQuality.generated.h"

UENUM(BlueprintType)
enum class SuitQuality : uint8 {
    Init,
    Grey,
    Green,
    Blue,
    Purple,
    Orange,
    Red,
    EnumMax,
};

