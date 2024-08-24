#include "BUS_FXAnimalEditComp.h"

UBUS_FXAnimalEditComp::UBUS_FXAnimalEditComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeedType = EFXAnimalSpeedType::Normal;
    this->MoveSpeed = 0.00f;
    this->MoveType = EFXAnimalMoveType::NormalMove;
    this->Time_BeginToDisappear = 10.00f;
    this->Time_EscapeToDisappear = 8.00f;
    this->Time_DisappearToDestory = 5.00f;
}


