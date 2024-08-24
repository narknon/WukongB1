#include "BUS_TriggerComp.h"

UBUS_TriggerComp::UBUS_TriggerComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerType = TriggerType::None;
    this->TriggerCharacter = NULL;
    this->TriggerStateWhenTriggerCharacterInvalid = false;
    this->bEnableSwitch = false;
    this->CircleRaidus = 0.00f;
    this->bEndOverlapTrigger = false;
    this->BeginEndOverlapTriggerDirectionType = BeginEndOverlapTriggerDirectionType::None;
    this->bCharacterActiveState = false;
    this->bUnitState = false;
    this->UnitState = EBGUUnitState::None;
    this->bSimpleState = false;
    this->SimpleState = EBGUSimpleState::Normal;
    this->AttrFloatType = EBGUAttrFloat::None;
    this->CompareType = ValueCompareType::IsEqualTo;
    this->bCompareRatio = false;
    this->CompareValue = 0.00f;
}


