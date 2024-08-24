#pragma once
#include "CoreMinimal.h"
#include "EFXAnimalMoveType.generated.h"

UENUM(BlueprintType)
enum class EFXAnimalMoveType : uint8 {
    NormalMove,
    SplineMove,
};

