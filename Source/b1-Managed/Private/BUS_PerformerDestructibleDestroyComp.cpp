#include "BUS_PerformerDestructibleDestroyComp.h"

UBUS_PerformerDestructibleDestroyComp::UBUS_PerformerDestructibleDestroyComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = false;
    this->HitStrengthLevel = EGSHitDestructibleStrengthLevel::None;
    this->IsNeedDrawDebug = false;
}

void UBUS_PerformerDestructibleDestroyComp::BeginPlayInCS_Implementation() {
}

void UBUS_PerformerDestructibleDestroyComp::SetEnableDestroyDestructible(bool IsEnabled) {
}

void UBUS_PerformerDestructibleDestroyComp::TickComponentInCS_Implementation(float DeltaTime) {
}


