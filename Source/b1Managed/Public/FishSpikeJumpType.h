#pragma once
#include "CoreMinimal.h"
#include "FishSpikeJumpType.generated.h"

UENUM(BlueprintType)
enum class FishSpikeJumpType : uint8 {
    Default,
    OnlyCloseTo,
    OnlyFarFrom,
    None,
};

