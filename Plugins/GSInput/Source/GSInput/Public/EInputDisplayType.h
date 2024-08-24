#pragma once
#include "CoreMinimal.h"
#include "EInputDisplayType.generated.h"

UENUM(BlueprintType)
enum class EInputDisplayType : uint8 {
    NORNAL_BUTTON,
    TRIGGER_BUTTON,
    TRIGGER_TEXT,
    AXIS_BUTTON,
    AXIS_TEXT,
    MOUSE_POS_TEXT,
};

