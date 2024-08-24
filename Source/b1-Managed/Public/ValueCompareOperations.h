#pragma once
#include "CoreMinimal.h"
#include "ValueCompareOperations.generated.h"

UENUM(BlueprintType)
enum class ValueCompareOperations : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
    LessThanPercentage,
    LessThanOrEqualToPercentage,
    GreaterThanPercentage,
    GreaterThanOrEqualToPercentage,
};

