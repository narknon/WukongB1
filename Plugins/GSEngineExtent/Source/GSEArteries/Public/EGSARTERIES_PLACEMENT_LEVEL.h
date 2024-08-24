#pragma once
#include "CoreMinimal.h"
#include "EGSARTERIES_PLACEMENT_LEVEL.generated.h"

UENUM(BlueprintType)
enum class EGSARTERIES_PLACEMENT_LEVEL : uint8 {
    NONE,
    BUTTOM,
    TOP,
    TOP_OR_BOTTOM,
    ALL = 7,
};

