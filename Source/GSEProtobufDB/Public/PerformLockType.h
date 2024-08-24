#pragma once
#include "CoreMinimal.h"
#include "PerformLockType.generated.h"

UENUM(BlueprintType)
enum class PerformLockType : uint8 {
    None,
    Unit,
    SceneItem,
};

