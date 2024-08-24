#include "BUAnimSettingsLocomotionEx.h"

FBUAnimSettingsLocomotionEx::FBUAnimSettingsLocomotionEx() {
    this->bUpperBodyOnly = false;
    this->bUseExAnim = false;
    this->AnimSeqIdle = NULL;
    this->AnimSeqEnter = NULL;
    this->AnimSeqExit = NULL;
    this->AnimSeqMoveFwd = NULL;
    this->AnimSeqMoveBwd = NULL;
    this->AnimSeqMoveLeft = NULL;
    this->AnimSeqMoveRight = NULL;
}

