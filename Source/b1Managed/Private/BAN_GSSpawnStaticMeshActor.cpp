#include "BAN_GSSpawnStaticMeshActor.h"

UBAN_GSSpawnStaticMeshActor::UBAN_GSSpawnStaticMeshActor() {
    this->bAttachToOwner = false;
    this->StaticMeshActorSetting = NULL;
}

void UBAN_GSSpawnStaticMeshActor::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


