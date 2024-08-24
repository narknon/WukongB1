#pragma once
#include "CoreMinimal.h"
#include "LockMoveDirectionSix.generated.h"

UENUM(BlueprintType)
enum class LockMoveDirectionSix : uint8 {
    None,
    F,
    FL,
    FR,
    BL,
    BR,
    B,
};

