#include "VFXAutoPlayer.h"

AVFXAutoPlayer::AVFXAutoPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayingPtr = 0;
    this->MaxLifeSpan = 0.00f;
    this->AutoMovingRange = 0.00f;
    this->AutoMovingSpeed = 0.00f;
}

void AVFXAutoPlayer::StopPlaying() {
}

void AVFXAutoPlayer::StartPlaying() {
}

void AVFXAutoPlayer::PlayNiagara(int32 InTargetNiagaraPtr) {
}

bool AVFXAutoPlayer::ListCompletedPlaying() {
    return false;
}

TArray<UNiagaraSystem*> AVFXAutoPlayer::GetInternalPlayList() {
    return TArray<UNiagaraSystem*>();
}

void AVFXAutoPlayer::FlushPlaying() {
}

void AVFXAutoPlayer::DestroyAllNiagaras() {
}

bool AVFXAutoPlayer::CurNiagaraStatusChanged(bool& bNumDecreased) {
    return false;
}

void AVFXAutoPlayer::BuildPlayList(const FString& InFolder) {
}


