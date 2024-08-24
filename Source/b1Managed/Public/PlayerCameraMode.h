#pragma once
#include "CoreMinimal.h"
#include "PlayerCameraMode.generated.h"

UENUM(BlueprintType)
enum class PlayerCameraMode : uint8 {
    AutoTrail,
    LockDarkSoul,
    LockDMC,
};

