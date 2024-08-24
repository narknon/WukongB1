#include "BGWTileLevelGroup.h"

UBGWTileLevelGroup::UBGWTileLevelGroup() {
    this->bShouldBeLoaded = false;
    this->bShouldBeVisible = false;
    this->bShouldBlockOnLoad = false;
    this->LastVolumeUnloadRequestTime = 0.00f;
    this->MinTimeBetweenVolumeUnloadRequests = 0.00f;
}


