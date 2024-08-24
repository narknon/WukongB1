#include "BGWDataAsset_ScaleTimeSetting.h"

UBGWDataAsset_ScaleTimeSetting::UBGWDataAsset_ScaleTimeSetting() {
    this->TimeScale = 0.00f;
    this->TotalTime = 0.00f;
    this->BlendInRealTime = 0.00f;
    this->BlendInType = EGSBlendTypeG::GSNone;
    this->BlendInExp = 0.00f;
    this->BlendOutRealTime = 0.00f;
    this->BlendOutType = EGSBlendTypeG::GSNone;
    this->BlendOutExp = 0.00f;
}


