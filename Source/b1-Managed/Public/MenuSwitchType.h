#pragma once
#include "CoreMinimal.h"
#include "MenuSwitchType.generated.h"

UENUM(BlueprintType)
enum class MenuSwitchType : uint8 {
    Normal,
    FocusActived,
    AimingActived,
    KeyBoardOrFocusActived,
};

