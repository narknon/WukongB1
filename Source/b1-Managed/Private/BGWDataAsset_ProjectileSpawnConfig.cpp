#include "BGWDataAsset_ProjectileSpawnConfig.h"

UBGWDataAsset_ProjectileSpawnConfig::UBGWDataAsset_ProjectileSpawnConfig() {
    this->SpawnerType = ProjectileSpawnerType::EffectCaster;
    this->bNeedHandleStopReq = false;
    this->ProjectileID = 0;
    this->ProjectileWave = 0;
    this->ProjectileNumInOneWave = 0;
    this->AttachToSpawnBase = false;
    this->AttachRule_Rot = EAttachmentRule::SnapToTarget;
    this->bEnableMultiTargetMode = false;
    this->bEnableSpawnBase_NoneTarget = false;
    this->bEnableTargetBase_NoneTarget = false;
}

bool UBGWDataAsset_ProjectileSpawnConfig::AboutEffectCaster() {
    return false;
}


