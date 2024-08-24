#include "BUAnimHumanoidCS_MonsterLocomotion.h"

UBUAnimHumanoidCS_MonsterLocomotion::UBUAnimHumanoidCS_MonsterLocomotion() {
    this->AnimIdle = NULL;
    this->MoveLoopFwdBlendAlpha = 0.00f;
    this->ASFreeRunFwd = NULL;
    this->ASFreeRunStartFwd = NULL;
    this->ASFreeRunStartFR = NULL;
    this->ASFreeRunStartBR = NULL;
    this->ASFreeRunStartFL = NULL;
    this->ASFreeRunStartBL = NULL;
    this->BSFreeLeanAdditive = NULL;
    this->BSFreeLeanAdditiveX = 0.00f;
    this->BSFreeLeanAdditiveY = 0.00f;
    this->BSFreeRotAdditive = NULL;
    this->BSFreeRotAdditiveX = 0.00f;
    this->BSFreeRotAdditiveY = 0.00f;
    this->ASFreeRunStopLeftFoot = NULL;
    this->ASFreeRunStopRightFoot = NULL;
    this->bLeftFootFront = false;
    this->ASLockWalkFwd = NULL;
    this->ASLockWalkFR = NULL;
    this->ASLockWalkBR = NULL;
    this->ASLockWalkFL = NULL;
    this->ASLockWalkBL = NULL;
    this->ASLockWalkBwd = NULL;
    this->LockMoveDir = MoveDirectionEight::None;
    this->LockWalkFwdExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkBwdExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkFLExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkBLExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkFRExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkBRExplicitTimeForLeftFootStop = 0.00f;
    this->LockWalkFwdExplicitTimeForRightFootStop = 0.00f;
    this->LockWalkBwdExplicitTimeForRightFootStop = 0.00f;
    this->LockWalkFLExplicitTimeForRightFootStop = 0.00f;
    this->LockWalkBLExplicitTimeForRightFootStop = 0.00f;
    this->LockWalkFRExplicitTimeForRightFootStop = 0.00f;
    this->LockWalkBRExplicitTimeForRightFootStop = 0.00f;
    this->bSwitchToLock = false;
    this->bLockMoveF = false;
    this->bLockMoveB = false;
    this->bLockMoveL = false;
    this->bLockMoveR = false;
    this->bFreeMoveStartFwd = false;
    this->bFreeMoveStartBL = false;
    this->bFreeMoveStartFL = false;
    this->bFreeMoveStartBR = false;
    this->bFreeMoveStartFR = false;
    this->bIdleToMove = false;
    this->bMoveStop = false;
    this->bStandardFreeMoveStop = false;
}


