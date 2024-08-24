#include "GsOverlapPoliceConfig.h"

FGsOverlapPoliceConfig::FGsOverlapPoliceConfig() {
    this->ManagePolice = EGsOverlapManagePolice::SameAsPrevious;
    this->State = EGsOverlapState::Enabled;
    this->OutState = EGsOverlapState::Enabled;
    this->DefaultState = EGsOverlapState::Enabled;
    this->ActualManagePolice = EGsOverlapManagePolice::SameAsPrevious;
}

