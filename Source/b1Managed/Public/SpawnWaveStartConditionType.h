#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveStartConditionType.generated.h"

UENUM(BlueprintType)
enum class SpawnWaveStartConditionType : uint8 {
    Auto,
    PreviousClear,
    TimeAfterPrevious,
    TimeAfterPreviousClear,
    GlobleCDFinished,
};

