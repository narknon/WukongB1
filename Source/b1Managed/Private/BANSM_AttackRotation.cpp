#include "BANSM_AttackRotation.h"

UBANSM_AttackRotation::UBANSM_AttackRotation() {
    this->MinFootOnGroundCanRotate = 0;
    this->MaxFootOnGroundCanRotate = 0;
}

bool UBANSM_AttackRotation::CheckState_Implementation(UAnimSequenceBase* AnimBase, float CurTime) {
    return false;
}


