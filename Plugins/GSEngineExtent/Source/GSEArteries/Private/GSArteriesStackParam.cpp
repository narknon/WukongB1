#include "GSArteriesStackParam.h"

FGSArteriesStackParam::FGSArteriesStackParam() {
    this->bCanBeStackedOnto = false;
    this->eFixToLevel = EGSARTERIES_PLACEMENT_LEVEL::NONE;
    this->eCanPitchAt = EGSARTERIES_PLACEMENT_LEVEL::NONE;
    this->eCanRollAt = EGSARTERIES_PLACEMENT_LEVEL::NONE;
    this->eCanYawAt = EGSARTERIES_PLACEMENT_LEVEL::NONE;
}

