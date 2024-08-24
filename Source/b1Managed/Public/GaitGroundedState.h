#pragma once
#include "CoreMinimal.h"
#include "GaitGroundedState.generated.h"

UENUM(BlueprintType)
enum class GaitGroundedState : uint8 {
    None,
    Idle,
    Walk,
    Run,
    Rush,
};

