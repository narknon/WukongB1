#pragma once
#include "CoreMinimal.h"
#include "SplineFlyUnitType.generated.h"

UENUM(BlueprintType)
enum class SplineFlyUnitType : uint8 {
    Monster,
    Player,
    TransitionPlayer,
};

