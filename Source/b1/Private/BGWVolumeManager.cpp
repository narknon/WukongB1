#include "BGWVolumeManager.h"

UBGWVolumeManager::UBGWVolumeManager() {
    this->LevelSteamingVolumeManager = NULL;
    this->ActorVisibilityVolumeManager = NULL;
    this->CameraGroupVolumeManager = NULL;
    this->LevelStreamingStateVolumeManager = NULL;
}

void UBGWVolumeManager::OnGSLevelStateChanged(int32 ActionID, int32 Linkage) {
}


