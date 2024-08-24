#include "BGUSkillPreviewSystem.h"

UBGUSkillPreviewSystem::UBGUSkillPreviewSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackerClass = NULL;
    this->SkillID = 0;
    this->Delay = 0.00f;
    this->bDrawSweepCheckSphere = false;
    this->bDrawSkillEffectArea = false;
    this->bDrawBuffArea = false;
    this->bDrawBulletCollision = false;
    this->bDrawBulletDestroyPos = false;
    this->TargetAddBati = false;
    this->EnableZBBTest = false;
    this->OpenLowDensityTest = false;
    this->MapSize = 0;
}

void UBGUSkillPreviewSystem::DrawforDebug(bool DrawAll, int32 SectorNum) {
}

void UBGUSkillPreviewSystem::OnSetPreviewConfig(FZBBPreviewConfig Config) {
}

void UBGUSkillPreviewSystem::StopTestAndOutputConfig() {
}

void UBGUSkillPreviewSystem::BeginPlayInCS_Implementation() {
}

void UBGUSkillPreviewSystem::TickComponentInCS_Implementation(float DeltaTime) {
}


