#include "BGWDataAsset_AutoTestMoveToConfig.h"

UBGWDataAsset_AutoTestMoveToConfig::UBGWDataAsset_AutoTestMoveToConfig() {
    this->MaxMoveTime = 0.00f;
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = false;
    this->IncludeTargetRadius = false;
    this->BTTargetType = EBTTargetType::Target;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::JOG;
    this->SpeedRateDistanceCurve = NULL;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
}


