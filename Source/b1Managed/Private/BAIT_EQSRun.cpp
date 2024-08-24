#include "BAIT_EQSRun.h"

UBAIT_EQSRun::UBAIT_EQSRun() {
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->EQSTemplate = NULL;
    this->MotionMatchingState = State_MM::None;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->SpeedRateDistanceCurve = NULL;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
    this->bEnableContinuousPathFinding = false;
    this->ContinuousPathFindingRadiusThreshold = 100.00f;
    this->bAutoCastTurnSkillIfNeeded = false;
    this->AutoUpdatePathTime = 0.00f;
    this->EnableLeisure = false;
    this->IntervalTime = 0.00f;
    this->EnableDrawLineDebug = false;
}


