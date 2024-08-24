#pragma once
#include "CoreMinimal.h"
#include "DispLibAttachConstraintMode.generated.h"

UENUM(BlueprintType)
enum class DispLibAttachConstraintMode : uint8 {
    Fixed,
    FixedTime,
    RootVelocityThreshold,
    AttachedSocketVelocityThreshold,
    AttachedSocketVelocityAndTorsionThreshold,
    AttachedSocketDistanceACCAndTorsionThreshold,
};

