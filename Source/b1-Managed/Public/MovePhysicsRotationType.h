#pragma once
#include "CoreMinimal.h"
#include "MovePhysicsRotationType.generated.h"

UENUM(BlueprintType)
enum class MovePhysicsRotationType : uint8 {
    None,
    FollowVelocityXYPlane,
    FollowVelocity,
};

