#pragma once
#include "CoreMinimal.h"
#include "PatrolType.generated.h"

UENUM(BlueprintType)
enum class PatrolType : uint8 {
    None,
    Random,
    Spline,
    Leisure,
    Follow,
    Group,
    MultiSpline,
};

