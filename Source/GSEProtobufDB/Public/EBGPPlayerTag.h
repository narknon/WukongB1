#pragma once
#include "CoreMinimal.h"
#include "EBGPPlayerTag.generated.h"

UENUM(BlueprintType)
enum class EBGPPlayerTag : uint8 {
    None,
    Transforming,
    PauseEnergyCost,
    DisableTransforming,
    EnumMax,
};

