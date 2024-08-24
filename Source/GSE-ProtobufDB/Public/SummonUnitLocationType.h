#pragma once
#include "CoreMinimal.h"
#include "SummonUnitLocationType.generated.h"

UENUM(BlueprintType)
enum class SummonUnitLocationType : uint8 {
    UsePointSetCached,
    UseManualSpawnPoint,
    UseEqsdata,
    UseEffectCasterPos,
    UseCasterPos,
    UseEffectPos,
    UseSceneItemPos,
};

