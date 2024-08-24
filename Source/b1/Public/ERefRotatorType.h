#pragma once
#include "CoreMinimal.h"
#include "ERefRotatorType.generated.h"

UENUM(BlueprintType)
enum class ERefRotatorType : uint8 {
    Zero,
    RefByController,
    RefByPlayer,
    RefByPlayerQTE,
    MAX = 255,
};

