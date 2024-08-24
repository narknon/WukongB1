#include "BANS_GSAMCurveMove.h"
#include "EGsEnAnimNS.h"

UBANS_GSAMCurveMove::UBANS_GSAMCurveMove() {
    this->AnimNSType = EGsEnAnimNS::AMCurveMove;
    this->MoveCurveXAsix = NULL;
    this->MoveCurveZAsix = NULL;
    this->MoveCurveType = EBGUMoveCurveType::DistanceCurve;
    this->bShouldClearVelocityOnEnd = false;
    this->NotUseWhenHaveTarget = false;
    this->UseBeHitDir = false;
    this->UseAttractionDir = false;
    this->UseForwarXDir = false;
    this->UseTargetBaseDisScale = false;
    this->TargetBaseDisScaleOffset = 0.00f;
    this->bAutoResetMovementMode = true;
    this->CliffFallCheckLength = 0.00f;
}

void UBANS_GSAMCurveMove::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAMCurveMove::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


