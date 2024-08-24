#include "GsUnitPoliceConfig.h"

FGsUnitPoliceConfig::FGsUnitPoliceConfig() {
    this->ManagePolice = EGsUnitManagePolice::SameAsPrevious;
    this->State = EGsUnitResetType::No;
    this->DefaultState = EGsUnitResetType::No;
    this->ActualManagePolice = EGsUnitManagePolice::SameAsPrevious;
    this->OutState = EGsUnitResetType::No;
}

