#pragma once
#include "CoreMinimal.h"
#include "InteractConstraint.generated.h"

UENUM(BlueprintType)
enum class InteractConstraint : uint8 {
    None,
    TransForming,
    NotFocusEnough,
    Busy,
    OtherIsUsing,
    EnemyAround,
    CD,
    Dead,
    NpcHide,
    ConfigMiss,
    ItemRequireCondition,
    Restriction,
    SplineMoving,
    Interacting,
    CricketIdle,
    Other,
};

