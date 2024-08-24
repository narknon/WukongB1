#pragma once
#include "CoreMinimal.h"
#include "ParkourMoveAnimState.generated.h"

UENUM(BlueprintType)
enum class ParkourMoveAnimState : uint8 {
    None,
    ParkourStart,
    ParkourStartFinished,
    ParkourFall,
    ParkourLand,
};

