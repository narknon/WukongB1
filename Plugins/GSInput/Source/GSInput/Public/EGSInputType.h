#pragma once
#include "CoreMinimal.h"
#include "EGSInputType.generated.h"

UENUM(BlueprintType)
enum class EGSInputType : uint8 {
    None,
    KeyboardMouse,
    Gamepad,
    Touch,
    Other,
};

