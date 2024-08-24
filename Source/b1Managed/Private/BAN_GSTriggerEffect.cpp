#include "BAN_GSTriggerEffect.h"

UBAN_GSTriggerEffect::UBAN_GSTriggerEffect() {
    this->EffectID = 0;
    this->TargetType = EANTriggerEffectTargetType::Owner;
}

void UBAN_GSTriggerEffect::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBAN_GSTriggerEffect::GSValidateInputCS_Implementation(AActor* Actor) const {
}

bool UBAN_GSTriggerEffect::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


