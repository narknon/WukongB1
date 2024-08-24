#include "BGWDataAsset_AutoTestEQSRunConfig.h"

UBGWDataAsset_AutoTestEQSRunConfig::UBGWDataAsset_AutoTestEQSRunConfig() {
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = false;
    this->EQSTemplate = NULL;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::JOG;
    this->SpeedRateDistanceCurve = NULL;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
    this->AutoUpdatePathTime = 0.00f;
    this->EnableLeisure = false;
    this->IntervalTime = 0.00f;
}


