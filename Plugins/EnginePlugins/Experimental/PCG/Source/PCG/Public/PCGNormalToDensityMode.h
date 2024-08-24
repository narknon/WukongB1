#pragma once
#include "CoreMinimal.h"
#include "PCGNormalToDensityMode.generated.h"

UENUM()
enum class PCGNormalToDensityMode : int8 {
    Set,
    Minimum,
    Maximum,
    Add,
    Subtract,
    Multiply,
    Divide,
};

