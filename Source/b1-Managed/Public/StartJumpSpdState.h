#pragma once
#include "CoreMinimal.h"
#include "StartJumpSpdState.generated.h"

UENUM(BlueprintType)
enum class StartJumpSpdState : uint8 {
    StartJumpSpdState_Zero,
    StartJumpSpdState_Normal,
    StartJumpSpdState_Fast,
};

