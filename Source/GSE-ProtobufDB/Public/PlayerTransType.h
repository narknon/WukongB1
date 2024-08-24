#pragma once
#include "CoreMinimal.h"
#include "PlayerTransType.generated.h"

UENUM(BlueprintType)
enum class PlayerTransType : uint8 {
    BattleUnit,
    NoBattleUnit,
    Ride,
};

