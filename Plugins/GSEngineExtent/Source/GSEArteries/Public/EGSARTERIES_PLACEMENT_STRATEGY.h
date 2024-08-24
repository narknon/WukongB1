#pragma once
#include "CoreMinimal.h"
#include "EGSARTERIES_PLACEMENT_STRATEGY.generated.h"

UENUM(BlueprintType)
enum class EGSARTERIES_PLACEMENT_STRATEGY : uint8 {
    ANY,
    PREFER_STACKABLE,
    BASE,
};

