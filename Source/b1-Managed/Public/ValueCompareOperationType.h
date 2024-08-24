#pragma once
#include "CoreMinimal.h"
#include "ValueCompareOperationType.generated.h"

UENUM(BlueprintType)
enum class ValueCompareOperationType : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
};

