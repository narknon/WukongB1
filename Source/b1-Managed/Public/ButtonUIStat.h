#pragma once
#include "CoreMinimal.h"
#include "ButtonUIStat.generated.h"

UENUM(BlueprintType)
enum class ButtonUIStat : uint8 {
    None,
    Normal,
    Hovered,
    Focused,
    LockNormal,
    LockHovered,
    LockFocused,
    Actived,
    Disable,
    NotUse,
    LockActived,
    Hide,
};

