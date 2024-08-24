#pragma once
#include "CoreMinimal.h"
#include "MagicFieldOverlapType.generated.h"

UENUM(BlueprintType)
enum class MagicFieldOverlapType : uint8 {
    Normal,
    NegativeOverlap,
};

