#include "GsDynamicObstaclePoliceConfig.h"

FGsDynamicObstaclePoliceConfig::FGsDynamicObstaclePoliceConfig() {
    this->ManagePolice = EGsDynamicObstacleManagePolice::SameAsPrevious;
    this->State = EGsDynamicObstacleState::Opened;
    this->OutState = EGsDynamicObstacleState::Opened;
    this->DefaultState = EGsDynamicObstacleState::Opened;
    this->ActualManagePolice = EGsDynamicObstacleManagePolice::SameAsPrevious;
}

