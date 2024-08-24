#pragma once
#include "CoreMinimal.h"
#include "ResetSpringArmRotationWay.generated.h"

UENUM(BlueprintType)
enum class ResetSpringArmRotationWay : uint8 {
    None,
    Reset2PlayerRotation,
    Reset2NearestRotation,
    UseCustomRotation,
};

