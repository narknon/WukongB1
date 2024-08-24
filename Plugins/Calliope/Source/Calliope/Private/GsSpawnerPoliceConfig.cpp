#include "GsSpawnerPoliceConfig.h"

FGsSpawnerPoliceConfig::FGsSpawnerPoliceConfig() {
    this->ManagePolice = EGsSpawnerManagePolice::SameAsPrevious;
    this->State = EGsSpawnerState::Disabled;
    this->DefaultState = EGsSpawnerState::Disabled;
    this->ActualManagePolice = EGsSpawnerManagePolice::SameAsPrevious;
    this->OutState = EGsSpawnerState::Disabled;
}

