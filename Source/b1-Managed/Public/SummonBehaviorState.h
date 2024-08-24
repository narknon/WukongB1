#pragma once
#include "CoreMinimal.h"
#include "SummonBehaviorState.generated.h"

UENUM(BlueprintType)
enum class SummonBehaviorState : uint8 {
    Default,
    Idle,
    Follow,
    EnumMax,
};

