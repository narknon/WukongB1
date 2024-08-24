#pragma once
#include "CoreMinimal.h"
#include "EPCGPointFilterOperator.generated.h"

UENUM(BlueprintType)
enum class EPCGPointFilterOperator : uint8 {
    Greater,
    GreaterOrEqual,
    Lesser,
    LesserOrEqual,
    Equal,
    NotEqual,
    InRange,
    Substring,
    Matches,
};

