#pragma once
#include "CoreMinimal.h"
#include "EGSConstraintAspectRatioType.generated.h"

UENUM(BlueprintType)
enum class EGSConstraintAspectRatioType : uint8 {
    None,
    UpDown,
    LeftRight,
};

