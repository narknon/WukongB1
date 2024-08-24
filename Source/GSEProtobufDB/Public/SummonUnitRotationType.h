#pragma once
#include "CoreMinimal.h"
#include "SummonUnitRotationType.generated.h"

UENUM(BlueprintType)
enum class SummonUnitRotationType : uint8 {
    None,
    FacingCurTarget,
    UseEffectCasterRot,
    UseManualSpawnPoint,
    UseSpawnPointRot,
    FacingLocalPlayer,
};

