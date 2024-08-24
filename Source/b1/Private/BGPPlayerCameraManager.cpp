#include "BGPPlayerCameraManager.h"

ABGPPlayerCameraManager::ABGPPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}





AActor* ABGPPlayerCameraManager::GetViewTargetCS() const {
    return NULL;
}

AActor* ABGPPlayerCameraManager::GetPendingViewTargetCS() const {
    return NULL;
}


