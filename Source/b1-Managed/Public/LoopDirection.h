#pragma once
#include "CoreMinimal.h"
#include "LoopDirection.generated.h"

UENUM(BlueprintType)
enum class LoopDirection : uint8 {
    LeftToRight,
    RightToLeft,
};

