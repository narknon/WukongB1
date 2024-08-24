#pragma once
#include "CoreMinimal.h"
#include "EJavascriptWindowType.generated.h"

UENUM(BlueprintType)
enum class EJavascriptWindowType : uint8 {
    Normal,
    Menu,
    ToolTip,
    Notification,
    CursorDecorator,
};

