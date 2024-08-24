#include "PrefabricatorSettings.h"

UPrefabricatorSettings::UPrefabricatorSettings() {
    this->PivotPosition = EPrefabricatorPivotPosition::Center;
    this->bAllowDynamicUpdate = true;
    this->DefaultThumbnailPitch = -11.25f;
    this->DefaultThumbnailYaw = -157.50f;
    this->DefaultThumbnailZoom = 0.00f;
}


