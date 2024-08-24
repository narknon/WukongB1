#pragma once
#include "CoreMinimal.h"
#include "MoveSpeedLevel.generated.h"

UENUM(BlueprintType)
enum class MoveSpeedLevel : uint8 {
    Walk,
    Run,
    Sprint,
};

