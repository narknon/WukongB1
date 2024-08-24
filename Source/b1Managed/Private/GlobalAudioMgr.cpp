#include "GlobalAudioMgr.h"

AGlobalAudioMgr::AGlobalAudioMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGlobalAudioMgr::BeginPlay() {
}

UApplicationLifecycleComponent* AGlobalAudioMgr::GetUApplicationLifecycleComponent() {
    return NULL;
}


