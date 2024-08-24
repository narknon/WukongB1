#pragma once
#include "CoreMinimal.h"
#include "EBGUMoveMode.generated.h"

UENUM(BlueprintType)
enum class EBGUMoveMode : uint8 {
    None,
    Normal,
    BeatBack,
    SideWalk,
    AttackRotate,
    TPSRotate,
    AIPathMove,
    AnimationMontage,
    CameraG4Move,
    AIWallAndCellMove,
    CurveSplineMove,
    JumpMove,
    StandRotate,
    CarMontage,
    FlyControl,
    PlayerAutoMove,
    GlideMove,
    ParkourMove,
    SplineFlyControl,
    RelativeFloatMove,
    AIFlyMove,
    RotateWithCam,
    PhysicsSimulation,
    ManualSplineMove,
    NpcGuideSplineMove,
    AISpiderMove,
    TurretRotate,
    CloudMove,
    EnumMax,
};

