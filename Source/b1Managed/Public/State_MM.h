#pragma once
#include "CoreMinimal.h"
#include "State_MM.generated.h"

UENUM(BlueprintType)
enum class State_MM : uint8 {
    None,
    Lock,
    Free,
    FreeWalk,
    FreeRun,
    FreeSprint,
    LockWalk,
    LockRun,
    LockSprint,
    FrozenMove,
    MuddyMove,
    WindyMove,
    SpiderSilkyMove,
};

