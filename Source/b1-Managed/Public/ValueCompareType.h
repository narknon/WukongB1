#pragma once
#include "CoreMinimal.h"
#include "ValueCompareType.generated.h"

UENUM(BlueprintType)
enum class ValueCompareType : uint8 {
    IsEqualTo,
    IsNotEqualTo,
    IsLessThan,
    IsLessThanOrEqualTo,
    IsGreaterThan,
    IsGreaterThanOrEqualTo,
};

