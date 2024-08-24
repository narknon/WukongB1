#include "BGWDataAsset_BlockInfoConfig.h"

UBGWDataAsset_BlockInfoConfig::UBGWDataAsset_BlockInfoConfig() {
    this->BlockCounterType = BlockCounterType::AddCountAfterBlock;
    this->BlockAMSelectMode = BlockAMSelectMode::SequenceSelectMode;
    this->BlockTiggerAngleLeft = -180.00f;
    this->BlockTiggerAngleRight = 180.00f;
    this->AreaDivisionLineForwardLeft = 0.00f;
    this->AreaDivisionLineForwardRight = 0.00f;
    this->AreaDivisionLineBackwardLeft = 0.00f;
    this->AreaDivisionLineBackwardRight = 0.00f;
}


