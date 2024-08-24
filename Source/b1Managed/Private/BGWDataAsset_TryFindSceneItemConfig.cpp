#include "BGWDataAsset_TryFindSceneItemConfig.h"

UBGWDataAsset_TryFindSceneItemConfig::UBGWDataAsset_TryFindSceneItemConfig() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->NeedRemoveCurrentCatch = false;
}


