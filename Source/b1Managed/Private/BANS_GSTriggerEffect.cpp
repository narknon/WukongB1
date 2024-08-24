#include "BANS_GSTriggerEffect.h"

UBANS_GSTriggerEffect::UBANS_GSTriggerEffect() {
    this->EffectID = 0;
}

void UBANS_GSTriggerEffect::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSTriggerEffect::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSTriggerEffect::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSTriggerEffect::GSValidateInputCS_Implementation(AActor* Actor) const {
}


