#pragma once
#include "CoreMinimal.h"
#include "EGSInputChangeType.generated.h"

UENUM(BlueprintType)
enum class EGSInputChangeType : uint8 {
    All,
    Gamepad,
    KeyboardMouse,
};

