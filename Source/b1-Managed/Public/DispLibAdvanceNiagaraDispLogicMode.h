#pragma once
#include "CoreMinimal.h"
#include "DispLibAdvanceNiagaraDispLogicMode.generated.h"

UENUM(BlueprintType)
enum class DispLibAdvanceNiagaraDispLogicMode : uint8 {
    Custom,
    StandardDirBeHit,
    StandardInteraction,
    PlanePostProcess,
    TinyOffsetBeHit,
    MatchingToNearestSocket,
    DBCMergedSystem,
};

