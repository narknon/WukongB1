#include "BasicActionBase.h"

UBasicActionBase::UBasicActionBase() {
    this->OwnCharacter = NULL;
    this->CurAIRequest = NULL;
    this->AIBasicActionType = EAIBasicActionType::DirectionMove;
}


