#include "UBGWDropItemTemplete.h"

UUBGWDropItemTemplete::UUBGWDropItemTemplete() {
    this->TempleteType = DropItemPerfromType::WithOutPick;
    this->BPClass = NULL;
    this->DADropFixed = NULL;
    this->DAWaitSign = NULL;
    this->DAPickedSign = NULL;
    this->DropingCurve = NULL;
    this->PickingCurve = NULL;
    this->EQSTemplate = NULL;
    this->EQSActivationDistance = 0.00f;
}


