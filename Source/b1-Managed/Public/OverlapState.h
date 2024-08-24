#pragma once
#include "CoreMinimal.h"
#include "OverlapState.generated.h"

UENUM(BlueprintType)
enum class OverlapState : uint8 {
    Enabled,
    Disabled,
};

