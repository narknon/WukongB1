#pragma once
#include "CoreMinimal.h"
#include "EGSForceFightUnitType.generated.h"

UENUM(BlueprintType)
enum class EGSForceFightUnitType : uint8 {
    None,
    Player,
    PlayerTeam,
};

