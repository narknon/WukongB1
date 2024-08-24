#pragma once
#include "CoreMinimal.h"
#include "EGSPosFitType.generated.h"

UENUM(BlueprintType)
enum class EGSPosFitType : uint8 {
    FitBegin,
    FitEnd,
    FitBothWithScale,
    EnumMax = 7,
};

