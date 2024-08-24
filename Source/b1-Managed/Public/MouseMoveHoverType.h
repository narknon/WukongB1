#pragma once
#include "CoreMinimal.h"
#include "MouseMoveHoverType.generated.h"

UENUM(BlueprintType)
enum class MouseMoveHoverType : uint8 {
    Default,
    MoveHover,
    StopUnhover,
};

