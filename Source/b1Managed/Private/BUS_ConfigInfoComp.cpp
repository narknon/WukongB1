#include "BUS_ConfigInfoComp.h"

UBUS_ConfigInfoComp::UBUS_ConfigInfoComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitBehaviorTree = NULL;
    this->TROConfigOverride = NULL;
    this->SpecialBoneConfig = NULL;
    this->SpotLightRotationLagSpeed = 0.00f;
    this->DodgeInputFixLine = 0.00f;
    this->GridSize = 0.00f;
    this->FallingCheckThreshold = 20000.00f;
    this->_InteractInfoTemplateType = InteractInfoTemplateType::Humankind;
    this->WaterSplashConfig = NULL;
    this->bDisableDataConvert = false;
}


