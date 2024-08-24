#pragma once
#include "CoreMinimal.h"
#include "MoveSpeedType.generated.h"

UENUM(BlueprintType)
enum class MoveSpeedType : uint8 {
    Walk,
    Run,
    Sprint,
};

