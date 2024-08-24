#include "BGWDataAsset_TrainDummyConfig.h"

UBGWDataAsset_TrainDummyConfig::UBGWDataAsset_TrainDummyConfig() {
    this->TrainDummyHPType = EGSTrainDummyHPType::Default;
    this->TrainDummyHPValue = 0;
    this->NeedCloseTrainDummyAI = false;
    this->DPSCalTimeType = EDPSCalTimeType::Total;
    this->DPSCalTime = 0.00f;
}


