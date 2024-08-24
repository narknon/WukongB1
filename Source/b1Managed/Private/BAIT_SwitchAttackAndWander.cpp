#include "BAIT_SwitchAttackAndWander.h"

UBAIT_SwitchAttackAndWander::UBAIT_SwitchAttackAndWander() {
    this->SwitchBattleFSMState = SwitchBattleFSMState::Attack;
    this->MinWanderTime = 0.00f;
    this->MaxWanderTime = 0.00f;
    this->MinComboNum = 0;
    this->MaxComboNum = 0;
}

void UBAIT_SwitchAttackAndWander::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


