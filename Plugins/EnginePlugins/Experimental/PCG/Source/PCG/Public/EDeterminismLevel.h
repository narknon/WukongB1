#pragma once
#include "CoreMinimal.h"
#include "EDeterminismLevel.generated.h"

UENUM(BlueprintType)
enum class EDeterminismLevel : uint8 {
    None,
    NoDeterminism = None,
    Basic,
    OrderOrthogonal,
    OrderConsistent,
    OrderIndependent,
    Deterministic = OrderIndependent,
};

