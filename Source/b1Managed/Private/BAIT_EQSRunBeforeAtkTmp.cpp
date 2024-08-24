#include "BAIT_EQSRunBeforeAtkTmp.h"

UBAIT_EQSRunBeforeAtkTmp::UBAIT_EQSRunBeforeAtkTmp() {
    this->ImmueStiff = false;
    this->NeedTraceHitTargetBefore = false;
    this->TraceTypeQuery = TraceTypeQuery1;
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->EQSTemplate = NULL;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
    this->AutoUpdatePathTime = 0.00f;
    this->IntervalTime = 0.00f;
    this->OwnerCharacter = NULL;
}


