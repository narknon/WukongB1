#include "BED_BehaviorNode_GameDataCounter.h"

UBED_BehaviorNode_GameDataCounter::UBED_BehaviorNode_GameDataCounter() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->CounterType = GameplayCounterType::None;
    this->CounterValue = 0.00f;
}

bool UBED_BehaviorNode_GameDataCounter::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


