#pragma once
#include "CoreMinimal.h"
#include "LockTargetType.generated.h"

UENUM(BlueprintType)
enum class LockTargetType : uint8 {
    Actor,
    SceneComp,
    SkeletonSocket,
    Point,
};

