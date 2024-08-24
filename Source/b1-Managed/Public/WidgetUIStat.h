#pragma once
#include "CoreMinimal.h"
#include "WidgetUIStat.generated.h"

UENUM(BlueprintType)
enum class WidgetUIStat : uint8 {
    None,
    Empty,
    NorReady,
    NorInCD,
    LockReady,
    LockInCD,
    Actived,
};

