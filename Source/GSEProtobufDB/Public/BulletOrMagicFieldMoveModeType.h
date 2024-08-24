#pragma once
#include "CoreMinimal.h"
#include "BulletOrMagicFieldMoveModeType.generated.h"

UENUM(BlueprintType)
enum class BulletOrMagicFieldMoveModeType : uint8 {
    None,
    StraightMode,
    TraceMode,
    BezierMode,
    PhysicsMode = 5,
    PhysicsSimulatingMode = 7,
    CircleSurroundMoveMode,
    ParabolaMoveMode,
    RealPhysicsMode,
    ManualCurveMoveMode,
    InertialSimulatingMoveMode,
    SplineMoveMode,
    InnerSplineMoveMode,
    FbmMoveMode,
    FbmBymjMoveMode,
    EnumMax,
};

