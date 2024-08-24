#include "BUS_InteractComp.h"

UBUS_InteractComp::UBUS_InteractComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractiveUnitID = 0;
    this->DefalutInteractiveGroupID = -1;
    this->ShopID = 0;
    this->RewardDropID = -1;
    this->ObjectMaterial = InteractiveObjectMaterial::Default;
    this->ActivableDistance = -1.00f;
}


