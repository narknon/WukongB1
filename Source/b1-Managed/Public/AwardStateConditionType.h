#pragma once
#include "CoreMinimal.h"
#include "AwardStateConditionType.generated.h"

UENUM(BlueprintType)
enum class AwardStateConditionType : uint8 {
    None,
    IsInBattle,
    InDistanceToCenter,
    TraceTeleportDistance,
    PlayerDead,
    EnumMax,
};

