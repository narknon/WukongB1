#include "BED_BehaviorNode_Condition.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_Condition::UBED_BehaviorNode_Condition() {
    this->Category = TEXT("Condition");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->OutputPins.AddDefaulted(2);
    this->bReverseCondition = false;
    this->ConditionCoolDownTimeMs = 0;
}


