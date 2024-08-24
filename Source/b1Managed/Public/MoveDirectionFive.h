#pragma once
#include "CoreMinimal.h"
#include "MoveDirectionFive.generated.h"

UENUM(BlueprintType)
enum class MoveDirectionFive : uint8 {
    None,
    F,
    R,
    BR,
    BL,
    L,
};

