#include "BUS_ModularMgrConfigComp.h"

UBUS_ModularMgrConfigComp::UBUS_ModularMgrConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModularActorTemplate = NULL;
    this->ContextTamerActor = NULL;
    this->bAutoAttachModularActors = false;
    this->bNeedsCopyPose = false;
    this->ModularActorSpawnInnerRange = 0.00f;
    this->ModularActorSpawnOuterRange = 0.00f;
    this->bAutoSnapToGround = false;
    this->bUseRandomLocationZ = false;
    this->bUseRandomRotation = false;
    this->bDestroyAfterOwnerDeath = false;
}


