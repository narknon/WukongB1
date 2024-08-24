#include "BGWDataAsset_SpiderSilkEntangleConfig.h"

UBGWDataAsset_SpiderSilkEntangleConfig::UBGWDataAsset_SpiderSilkEntangleConfig() {
    this->NG_Template = NULL;
    this->DBC_Template = NULL;
    this->MaxCount = 0.00f;
    this->CountThreshold_HardMove = 0.00f;
    this->HardMoveBuffID = 0;
    this->bExitHardMoveWhenJump = false;
    this->EntangleSkillEffectID = 0;
    this->SpeedMonitorInterval = 0.00f;
    this->MappingCurve_Speed = NULL;
    this->IncreaseCount_OnJump = 0.00f;
    this->IncreaseCount_OnLand = 0.00f;
}


