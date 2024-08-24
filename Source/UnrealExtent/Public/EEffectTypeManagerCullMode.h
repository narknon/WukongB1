#pragma once
#include "CoreMinimal.h"
#include "EEffectTypeManagerCullMode.generated.h"

UENUM(BlueprintType)
enum class EEffectTypeManagerCullMode : uint8 {
    Enabled,
    Paused,
    Disabled,
};

