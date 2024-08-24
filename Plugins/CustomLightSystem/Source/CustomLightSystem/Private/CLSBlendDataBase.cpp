#include "CLSBlendDataBase.h"

FCLSBlendDataBase::FCLSBlendDataBase() {
    this->bInitialized = false;
    this->SpeedAlpha = 0.00f;
    this->bOriginUseCustomBlendOutSpeed = false;
    this->OriginCustomBlendOutSpeedAlpha = 0.00f;
    this->bTargetUseCustomBlendOutSpeed = false;
    this->TargetCustomBlendOutSpeedAlpha = 0.00f;
    this->CurrentAlpha = 0.00f;
    this->TargetAlpha = 0.00f;
    this->CurrentPercentage = 0.00f;
}

