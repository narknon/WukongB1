#pragma once
#include "CoreMinimal.h"
#include "MoveDirection.generated.h"

UENUM(BlueprintType)
enum class MoveDirection : uint8 {
    None,
    Forward,
    Right,
    Backward,
    Left,
};

