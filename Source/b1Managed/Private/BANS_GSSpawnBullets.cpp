#include "BANS_GSSpawnBullets.h"

UBANS_GSSpawnBullets::UBANS_GSSpawnBullets() {
    this->bNeedHandleStopReq = true;
    this->bNeedDestorySpawnedBullet = false;
    this->BulletID = 0;
    this->BulletWave = 1;
    this->WaveIntervalNoise = 0.00f;
    this->BulletNumInOneWave = 1;
    this->AttachToSpawnBase = false;
    this->AttachRule_Rot = EAttachmentRule::SnapToTarget;
    this->bEnableMultiTargetMode = false;
    this->bEnableSpawnBase_NoneTarget = false;
    this->bEnableTargetBase_NoneTarget = false;
}

bool UBANS_GSSpawnBullets::MarkDirty() const {
    return false;
}

void UBANS_GSSpawnBullets::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSpawnBullets::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSSpawnBullets::GSValidateInputCS_Implementation(AActor* InActor) const {
}


