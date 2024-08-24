#include "BANSM_MarkFoot.h"

UBANSM_MarkFoot::UBANSM_MarkFoot() {
    this->SlotName = TEXT("DefaultSlot");
    this->DistTolerance = 0.00f;
}

bool UBANSM_MarkFoot::CheckState_Implementation(UAnimSequenceBase* AnimBase, float CurTime) {
    return false;
}


