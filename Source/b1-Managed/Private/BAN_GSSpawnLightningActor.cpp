#include "BAN_GSSpawnLightningActor.h"

UBAN_GSSpawnLightningActor::UBAN_GSSpawnLightningActor() {
    this->LightningFXActorClass = NULL;
    this->NeedAttach = false;
}

void UBAN_GSSpawnLightningActor::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


