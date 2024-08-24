#include "BaseActorComp.h"

UBaseActorComp::UBaseActorComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugID = 0;
    this->LogLvl = 0;
    this->ActorCompContainer = NULL;
}






int32 UBaseActorComp::GetLogLvl() {
    return 0;
}

int32 UBaseActorComp::GetDebugID() {
    return 0;
}





