#include "BAN_GSMontageJumpToSectionByCondition.h"

UBAN_GSMontageJumpToSectionByCondition::UBAN_GSMontageJumpToSectionByCondition() {
    this->JumpSectionConditionType = JumpSectionCondition::SceneItemNotFound;
    this->bJumpImmediately = false;
}

void UBAN_GSMontageJumpToSectionByCondition::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimN UBAN_GSMontageJumpToSectionByCondition::GetAnimNType_Implementation() const {
    return EGsEnAnimN::None;
}

FString UBAN_GSMontageJumpToSectionByCondition::GetJumpableSectionPrefix_Implementation() const {
    return TEXT("");
}

bool UBAN_GSMontageJumpToSectionByCondition::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


