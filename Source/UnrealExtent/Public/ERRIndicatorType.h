#pragma once
#include "CoreMinimal.h"
#include "ERRIndicatorType.generated.h"

UENUM(BlueprintType)
enum class ERRIndicatorType : uint8 {
    Top,
    Bottom,
    Left,
    Right,
    Middle,
};

