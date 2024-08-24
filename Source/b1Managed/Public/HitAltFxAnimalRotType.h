#pragma once
#include "CoreMinimal.h"
#include "HitAltFxAnimalRotType.generated.h"

UENUM(BlueprintType)
enum class HitAltFxAnimalRotType : uint8 {
    CamDir_Fwd,
    CamDir_Bwd,
    CamDir_Right,
    CamDir_Left,
    RotToPlayer,
    RotToPlayerSurround,
};

