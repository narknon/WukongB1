#pragma once
#include "CoreMinimal.h"
#include "EBUStateTrigger.generated.h"

UENUM(BlueprintType)
enum class EBUStateTrigger : uint8 {
    None,
    Die,
    Rebirth,
    CastSkillSuccess,
    AttackStateBegin,
    AttackRotationBegin,
    SkillBreak,
    Beatback,
    EnterComboWindow,
    AtkRebounding,
    UnitInputWalkPressed,
    UnitInputWalkRelease,
    UnitInputSprintPressed,
    UnitInputSprintRelease,
    BreakSprint,
    EnableMoveInSkill,
    EnterAtkComboKeyCache,
    EnterDodgeComboKeyCache,
    EnterDodgeWindow,
    EnterMagicKeyCache,
    EnterMagicWindow,
    HRCounterattackBegin,
    ShooterModeTrigger,
    ShooterModeClear,
    BMMoveAttackTrigger,
    BMMoveAttackClear,
    AttackAlignUpperBodyToSlopeBegin,
    AttackAlignWholeBodyToSlopeBegin,
    JumpMovingStart,
    JumpMovingStop,
    ShootModeTigger,
    ShootModeClear,
    AIInputSprint,
    AIInputRun,
    AIInputWalk,
    BeginFloatingHit,
    EndFloatingHit,
    EnterGlideMove,
    EndGlideMove,
    EnterMoveWindow,
    EnterBlockBeatBack = 70,
    EnterPerfectBlockBeatBack,
    EnterBlockBounced,
    LeaveAllBlockState,
    FreezeAccProtectBegin,
    EnableImpactAction,
    EnterBlindStiff,
    TeleportBegin,
    TeleportEnd,
    EnterAbortWindow,
    EnterAnimationSyncDeathWindow,
    EnterJumpWindow,
    ExitJumpWindow,
    StartJump,
    StartMoveInMoveWindow,
    EnterPhasePerformance,
    ExitPhasePerformance,
    Enter_LifeSavingHair_FakeDead,
    Enter_LifeSavingHair_Rebirth,
    Exit_LifeSavingHair,
    EnterVigorKeyCache,
    EnterVigorWindow,
    EnterItemSkillKeyCache,
    EnterItemSkillWindow,
    EnterLifeSavingHairBlocking,
    ExitLifeSavingHairBlocking,
    EnterInteractWindow,
    EnterCloudWindow,
    EnterChapterClearWorkFlow,
    ExitChapterClearWorkFlow,
    EnumMax,
};

