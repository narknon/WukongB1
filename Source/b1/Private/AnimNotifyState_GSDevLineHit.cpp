#include "AnimNotifyState_GSDevLineHit.h"
#include "EGsEnAnimNS.h"

UAnimNotifyState_GSDevLineHit::UAnimNotifyState_GSDevLineHit() {
    this->AnimNSType = EGsEnAnimNS::DevLineHit;
    this->CollisionChannel = ECC_GameTraceChannel1;
    this->ResultFilterType = ESweepCheckHitFilterType::NotInSameTeam;
    this->HitVEffectID = 0;
    this->bHitFromActorLocation = false;
    this->HitCheckRadius = 1.00f;
    this->bRenderDebugShape = false;
}


