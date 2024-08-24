#pragma once
#include "CoreMinimal.h"
#include "EGSInputIconShowType.generated.h"

UENUM(BlueprintType)
enum class EGSInputIconShowType : uint8 {
    KeyboardMouse,
    Gamepad,
    Both,
};

