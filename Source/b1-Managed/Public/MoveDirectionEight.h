#pragma once
#include "CoreMinimal.h"
#include "MoveDirectionEight.generated.h"

UENUM(BlueprintType)
enum class MoveDirectionEight : uint8 {
    None,
    F,
    FR,
    R,
    BR,
    B,
    BL,
    L,
    FL,
};

