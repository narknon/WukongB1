#pragma once
#include "CoreMinimal.h"
#include "RotateDirection.generated.h"

UENUM(BlueprintType)
enum class RotateDirection : uint8 {
    Auto,
    Clockwise,
    Counterclockwise,
};

