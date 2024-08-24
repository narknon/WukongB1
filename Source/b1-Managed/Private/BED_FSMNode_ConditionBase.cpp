#include "BED_FSMNode_ConditionBase.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_ConditionBase::UBED_FSMNode_ConditionBase() {
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
}


