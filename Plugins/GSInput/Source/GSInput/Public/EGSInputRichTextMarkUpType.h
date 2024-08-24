#pragma once
#include "CoreMinimal.h"
#include "EGSInputRichTextMarkUpType.generated.h"

UENUM(BlueprintType)
enum class EGSInputRichTextMarkUpType : uint8 {
    None,
    InputAction,
    Keyboard,
    Gamepad,
    InputActionAlwaysShow,
};

