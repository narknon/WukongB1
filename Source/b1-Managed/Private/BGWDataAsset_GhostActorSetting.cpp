#include "BGWDataAsset_GhostActorSetting.h"

UBGWDataAsset_GhostActorSetting::UBGWDataAsset_GhostActorSetting() {
    this->GhostActorClass = NULL;
    this->JustCopyWeapon = false;
    this->WeaponIndex = 0;
    this->bEnableCustomDepthStencil = false;
    this->Scale = 0.00f;
    this->ScaleUseCurve = false;
    this->ScaleCurve = NULL;
}


