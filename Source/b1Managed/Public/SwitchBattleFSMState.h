#pragma once
#include "CoreMinimal.h"
#include "SwitchBattleFSMState.generated.h"

UENUM(BlueprintType)
enum class SwitchBattleFSMState : uint8 {
    Attack,
    Wander,
};

