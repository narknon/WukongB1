#pragma once
#include "CoreMinimal.h"
#include "EPCGSettingsExecutionMode.generated.h"

UENUM(BlueprintType)
enum class EPCGSettingsExecutionMode : uint8 {
    Enabled,
    Debug,
    Isolated,
    Disabled,
};

