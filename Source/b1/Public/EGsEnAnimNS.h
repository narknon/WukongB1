#pragma once
#include "CoreMinimal.h"
#include "EGsEnAnimNS.generated.h"

UENUM(BlueprintType)
enum class EGsEnAnimNS : uint8 {
    None,
    AttackState,
    AttackRotation,
    SweepCheck,
    ComboWindow,
    EditorHelper,
    DevLineHit,
    AddState,
    AddBuff,
    SlowTime,
    CalcAMScale,
    CastDingShen,
    SetCurveValueToMesh,
    HeadLock,
    HandAndFootLock,
    ChangeMoveMode,
    ZatoiSPScore,
    AMSpeedRate,
    AMCurveMove,
    Aiming,
    Shooting,
    Casting,
    MoveAttackState,
    AISkillFeature,
    MontageJumpToSection,
    AbortWindow,
    SetCurveValueToHair,
    SyncAnimation,
    Max,
};

