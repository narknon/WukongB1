#pragma once
#include "CoreMinimal.h"
#include "GSATERIES_SIDE_SELECT_FEATURE.generated.h"

UENUM(BlueprintType)
enum class GSATERIES_SIDE_SELECT_FEATURE : uint8 {
    RANDOM_SIDE,
    LONGEST_SIDE,
    SHORTEST_SIDE,
    EACH_SIDE,
    FIRST_SIDE,
};

