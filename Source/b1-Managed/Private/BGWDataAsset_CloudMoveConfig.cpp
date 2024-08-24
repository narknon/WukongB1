#include "BGWDataAsset_CloudMoveConfig.h"

UBGWDataAsset_CloudMoveConfig::UBGWDataAsset_CloudMoveConfig() {
    this->CloudSkillCooldownTime = 0;
    this->CloudSkill_Ride_Walk = 0;
    this->CloudSkill_Ride_Run = 0;
    this->CloudSkill_Ride_Sprint = 0;
    this->CloudSkill_Ride_Fall = 0;
    this->CloudSkill_Ride_Fall_MinHeight = 0.00f;
    this->CloudSkill_GetOff_Walk_Low = 0;
    this->CloudSkill_GetOff_Walk_High = 0;
    this->CloudSkill_GetOff_Run_Low_Forward = 0;
    this->CloudSkill_GetOff_Run_Low_Upward = 0;
    this->CloudSkill_GetOff_Run_Low_Downward = 0;
    this->CloudSkill_GetOff_Run_High_Forward = 0;
    this->CloudSkill_GetOff_Run_High_Upward = 0;
    this->CloudSkill_GetOff_Run_High_Downward = 0;
    this->CloudSkill_GetOff_Rush_Low_Forward = 0;
    this->CloudSkill_GetOff_Rush_Low_Upward = 0;
    this->CloudSkill_GetOff_Rush_Low_Downward = 0;
    this->CloudSkill_GetOff_Rush_High_Forward = 0;
    this->CloudSkill_GetOff_Rush_High_Upward = 0;
    this->CloudSkill_GetOff_Rush_High_Downward = 0;
    this->HeightLimitThreshold = 0.00f;
    this->HeightLimitMaxPitchCurve = NULL;
    this->DisableHeightLimitIfNoInput = false;
    this->MinimumHeightRestriction = 0.00f;
    this->MinimumHeightRestrictionThreshold = 0.00f;
    this->HorizontalFlightUpAngleRange = 0.00f;
    this->HorizontalFlightDownAngleRange = 0.00f;
    this->RushEffectSpeed = 0.00f;
    this->RushAkEvent = NULL;
    this->CloudMoveItemId = 0;
    this->CloudEffectDBC = NULL;
    this->CloudEffectDBC_RotateLerpSpeedCurve = NULL;
    this->CloudEffectDBC_LocationLerpSpeedCurve = NULL;
    this->CloudEffectDBC_OffsetCurve = NULL;
    this->CloudAkEventBegin = NULL;
    this->CloudAkEventStop = NULL;
    this->CloudFoliageFadeScaleCurve = NULL;
    this->GroundEffectDistance = 0.00f;
    this->GroundEffectInterval = 0.00f;
    this->GroundEffectSpeed = 0.00f;
}


