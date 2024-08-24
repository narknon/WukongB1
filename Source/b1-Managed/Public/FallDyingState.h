#pragma once
#include "CoreMinimal.h"
#include "FallDyingState.generated.h"

UENUM(BlueprintType)
enum class FallDyingState : uint8 {
    Min,
    Alive,
    FallDyingBegin,
    FallDyingWaiting,
    FallDyingWaitSelfSave,
    FallDyingSelfSaving,
    RealDead,
};

