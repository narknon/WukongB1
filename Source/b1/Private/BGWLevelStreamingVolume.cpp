#include "BGWLevelStreamingVolume.h"

ABGWLevelStreamingVolume::ABGWLevelStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bEditorPreVisOnly = false;
    this->bDisabled = false;
    this->bOnStartLoading = false;
    this->StreamingUsage = EBGWStreamingVolumeUsage::LoadingAndVisibility;
    this->bWorldCompositionGroup = true;
    this->MinTimeBetweenVolumeUnloadRequests = 1.00f;
}

void ABGWLevelStreamingVolume::SetEnableWorldCompositionGroup(bool bEnable) {
}


