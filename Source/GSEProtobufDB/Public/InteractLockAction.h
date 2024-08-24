#pragma once
#include "CoreMinimal.h"
#include "InteractLockAction.generated.h"

UENUM(BlueprintType)
enum class InteractLockAction : uint8 {
    None,
    LockSkill,
    OnlyWalk,
    LockAllInput,
};

