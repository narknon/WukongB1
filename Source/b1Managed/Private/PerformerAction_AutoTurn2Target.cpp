#include "PerformerAction_AutoTurn2Target.h"

UPerformerAction_AutoTurn2Target::UPerformerAction_AutoTurn2Target() {
    this->TurnLeftMontage = NULL;
    this->TurnRightMontage = NULL;
    this->TurnThreshold = 45.00f;
    this->PerformerActor = NULL;
    this->PlayerActor = NULL;
}


