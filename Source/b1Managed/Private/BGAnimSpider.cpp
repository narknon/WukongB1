#include "BGAnimSpider.h"

UBGAnimSpider::UBGAnimSpider() {
    this->ABPSetting = NULL;
    this->DefaultIdle = NULL;
    this->JumpStart = NULL;
    this->JumpLoop = NULL;
    this->JumpEndLight = NULL;
    this->JumpEndHeavy = NULL;
    this->bUseJumpEndLight = false;
    this->SpineLerpSpeed = 0.00f;
    this->bIsOnPlatform = false;
    this->bIsFalling = false;
    this->bStartJump = false;
    this->bIsAISpiderMove = false;
    this->bUsePoseOverride = false;
    this->EnableSnapshotBlendTime = 0.00f;
    this->DisableSnapshotBlendTime = 0.00f;
}

void UBGAnimSpider::BlueprintUpdateAnimation_Implementation(float DeltaSeconds) {
}

void UBGAnimSpider::BlueprintInitializeAnimation_Implementation() {
}


