#include "BGWCameraGroupVolumeManager.h"

UBGWCameraGroupVolumeManager::UBGWCameraGroupVolumeManager() {
    this->bEnableCameraGroupManager = true;
    this->TickIntervalMs = 100;
    this->LastFrameTargetGroupId = 0;
    this->PlayerController = NULL;
    this->TargetVolume = NULL;
    this->TargetAlpha = 0.00f;
    this->TickIntervalSeconds = 0.10f;
    this->TickTime = 0.00f;
    this->LastFrameAlpha = 0.00f;
}

UBGWCameraGroupVolumeManager* UBGWCameraGroupVolumeManager::Get(UObject* WorldContext) {
    return NULL;
}


