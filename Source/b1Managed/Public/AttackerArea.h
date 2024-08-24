#pragma once
#include "CoreMinimal.h"
#include "AttackerArea.generated.h"

UENUM(BlueprintType)
enum class AttackerArea : uint8 {
    Forward,
    LeftSide,
    RightSide,
    Backward,
};

