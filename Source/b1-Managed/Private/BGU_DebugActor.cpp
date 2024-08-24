#include "BGU_DebugActor.h"

ABGU_DebugActor::ABGU_DebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneRoot = NULL;
    this->SightPerceptionDebugSector = NULL;
    this->HearingPerceptionDebugCircle = NULL;
    this->WakeUpRangeCylinder = NULL;
}

void ABGU_DebugActor::BeginPlayCS_Implementation() {
}

void ABGU_DebugActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}


