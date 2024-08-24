#pragma once
#include "CoreMinimal.h"
#include "AimType.generated.h"

UENUM(BlueprintType)
enum class AimType : uint8 {
    NONE,
    AIM_TO_CUR_TARGET,
    XYLineFromOwner,
};

