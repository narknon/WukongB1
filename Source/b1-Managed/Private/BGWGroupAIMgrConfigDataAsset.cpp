#include "BGWGroupAIMgrConfigDataAsset.h"

UBGWGroupAIMgrConfigDataAsset::UBGWGroupAIMgrConfigDataAsset() {
    this->PerformerNumToStart = 0;
    this->UpdateDuration = 0.00f;
    this->UpdateDurationForAllocHotZonePoint = 0.00f;
    this->MaxAtkMoveTime = 0.00f;
    this->NormalTaskWaitTime = 0.00f;
    this->NormalTaskBeginNoiseTimeForMeleeAttacker = 0.00f;
    this->NormalTaskBeginNoiseTimeForRangeAttacker = 0.00f;
    this->IsNoMoveAttackInFirstRound = false;
    this->MeleeAttackTokenNum = 0;
    this->RangeAttackTokenNum = 0;
    this->MinMeleeAttackTokenReplenishedNum = 0;
    this->MinRangeAttackTokenNumWhenReplenished = 0;
    this->InViewAngleOneSide = 0.00f;
    this->MoveTo_DCParam_Switch2KFTDistance = 0;
    this->MoveTo_DCParam_Switch2MoveToDistance = 0;
    this->OutermostCircleWanderNearbyChooseRatio = 0;
    this->NoteString1 = 0;
    this->InCameraViewportWeight = 0.00f;
    this->OutCameraViewportWeight = 0.00f;
    this->DistanceScoreWeight = 0.00f;
    this->AngleScoreWeight = 0.00f;
    this->LastAttackPerSecondScore = 0.00f;
    this->LastAttackPerSecondScoreMax = 0.00f;
    this->LockExtraScore = 0.00f;
    this->BossExtraScore = 0.00f;
}


