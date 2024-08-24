#include "GsStreamingLevelPoliceConfig.h"

FGsStreamingLevelPoliceConfig::FGsStreamingLevelPoliceConfig() {
    this->ManagePolice = EGsStreamingLevelManagePolice::SameAsPrevious;
    this->State = EGsStreamingLevelState::LoadedAndShown;
    this->DefaultState = EGsStreamingLevelState::LoadedAndShown;
    this->ActualManagePolice = EGsStreamingLevelManagePolice::SameAsPrevious;
    this->OutState = EGsStreamingLevelState::LoadedAndShown;
}

