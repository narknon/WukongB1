#pragma once
#include "CoreMinimal.h"
#include "DmgRangeType.generated.h"

UENUM(BlueprintType)
enum class DmgRangeType : uint8 {
    Default,
    Near,
    Far,
    EnumMax = 255,
};

