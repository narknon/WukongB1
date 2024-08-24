#pragma once
#include "CoreMinimal.h"
#include "MagicSkillOperationMode.generated.h"

UENUM(BlueprintType)
enum class MagicSkillOperationMode : uint8 {
    NormalCast,
    LockCast,
    RepeatToExit,
};

