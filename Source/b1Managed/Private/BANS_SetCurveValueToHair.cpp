#include "BANS_SetCurveValueToHair.h"

UBANS_SetCurveValueToHair::UBANS_SetCurveValueToHair() {
    this->TemporaryClose = false;
    this->HairType = EGSHairType::TressFX;
}

EGsEnAnimNS UBANS_SetCurveValueToHair::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}


