#pragma once
#include "CoreMinimal.h"
#include "EGSUIConflictNavigationType.generated.h"

UENUM(BlueprintType)
enum class EGSUIConflictNavigationType : uint8 {
    Gamepad_DPad,
    Gamepad_Left,
    Keyboard,
};

