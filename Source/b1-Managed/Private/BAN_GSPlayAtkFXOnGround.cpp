#include "BAN_GSPlayAtkFXOnGround.h"

UBAN_GSPlayAtkFXOnGround::UBAN_GSPlayAtkFXOnGround() {
    this->AtkFXOnGroundTypeList.AddDefaulted(2);
    this->HitFXRadiusMin = 100.00f;
    this->HitFXRadiusMax = 100.00f;
    this->HitFXRadiusExpandTime = 0.00f;
    this->SlopeSamplingRadiuseRadius = 0.00f;
    this->SurfaceSamplingRadius = 0.00f;
    this->LineTraceHeight = 0.00f;
    this->SkillEffectID = 0;
    this->EnableCheckThroughWall = false;
}

void UBAN_GSPlayAtkFXOnGround::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


