#include "GsManagedNPCUnit.h"

FGsManagedNPCUnit::FGsManagedNPCUnit() {
    this->TeamID = 0;
    this->IdleAMIdx = 0;
    this->LeisureAnimIndex = 0;
    this->InteractGroupID = 0;
    this->ShowState = EGsNPCShowState::Show;
}

