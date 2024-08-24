#include "BGU_AIMover.h"

UBGU_AIMover::UBGU_AIMover() {
    this->OwnerCtrl = NULL;
    this->PathFollowingComponent = NULL;
}

void UBGU_AIMover::ResetRequest() {
}

void UBGU_AIMover::MoveTo(const FBGU_AIMoverRequest& request) {
}

bool UBGU_AIMover::IsRequestValid() {
    return false;
}

bool UBGU_AIMover::IsOutOfRange() {
    return false;
}

void UBGU_AIMover::Init(AController* OwnerAICtrl) {
}

int32 UBGU_AIMover::GetRequestID() {
    return 0;
}

UPathFollowingComponent* UBGU_AIMover::GetPathFollowingComponent() const {
    return NULL;
}

TEnumAsByte<EPathFollowingStatus::Type> UBGU_AIMover::GetMoveStatus() const {
    return EPathFollowingStatus::Idle;
}

void UBGU_AIMover::AbortMove() {
}


