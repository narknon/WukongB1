#pragma once
#include "CoreMinimal.h"
#include "EGSScreenMode.generated.h"

UENUM(BlueprintType)
enum class EGSScreenMode : uint8 {
    FULL_SCREEN,
    WINDOWED_NO_BORDER,
    WINDOWED,
};

