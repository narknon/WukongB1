#include "BAN_SwitchTransSpellSolution.h"

UBAN_SwitchTransSpellSolution::UBAN_SwitchTransSpellSolution() {
    this->SolutionID = 0;
}

void UBAN_SwitchTransSpellSolution::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

FString UBAN_SwitchTransSpellSolution::GetNotifyName_Implementation() const {
    return TEXT("");
}

bool UBAN_SwitchTransSpellSolution::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


