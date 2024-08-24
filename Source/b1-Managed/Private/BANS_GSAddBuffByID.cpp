#include "BANS_GSAddBuffByID.h"

UBANS_GSAddBuffByID::UBANS_GSAddBuffByID() {
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->UseBuffDescDuration = false;
}

void UBANS_GSAddBuffByID::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAddBuffByID::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAddBuffByID::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSAddBuffByID::GSValidateInputCS_Implementation(AActor* Actor) const {
}


