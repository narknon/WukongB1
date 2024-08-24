#include "GsInteractorPoliceConfig.h"

FGsInteractorPoliceConfig::FGsInteractorPoliceConfig() {
    this->ManagePolice = EGsInteractorManagePolice::SameAsPrevious;
    this->State = EGsInteractorState::Interactive;
    this->DefaultState = EGsInteractorState::Interactive;
    this->ActualManagePolice = EGsInteractorManagePolice::SameAsPrevious;
    this->OutState = EGsInteractorState::Interactive;
    this->bCanModify = false;
}

