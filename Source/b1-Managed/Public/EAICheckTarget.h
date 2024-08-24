#pragma once
#include "CoreMinimal.h"
#include "EAICheckTarget.generated.h"

UENUM(BlueprintType)
enum class EAICheckTarget : uint8 {
    CachedScencItem,
    CurLockTarget,
    FirstLocalPlayer,
    EQSTarget,
};

