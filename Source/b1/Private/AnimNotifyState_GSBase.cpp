#include "AnimNotifyState_GSBase.h"

UAnimNotifyState_GSBase::UAnimNotifyState_GSBase() {
    this->AnimNSType = EGsEnAnimNS::None;
    this->bCanTriggerEndByCrossMontageBegin = true;
    this->IsCheckAnimInstance = false;
    this->CanBePlacedInASCS = false;
    this->CanUseQueuedType = false;
    this->isPreload = false;
}


void UAnimNotifyState_GSBase::GSValidateInputCS_Implementation(AActor* Actor) const {
}











bool UAnimNotifyState_GSBase::GSAllowCrossSection_Implementation() const {
    return false;
}


TArray<UObject*> UAnimNotifyState_GSBase::GetPreloadedAssets() const {
    return TArray<UObject*>();
}

float UAnimNotifyState_GSBase::GetModifySpeedRate_Implementation() const {
    return 0.0f;
}


EGsEnAnimNS UAnimNotifyState_GSBase::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UAnimNotifyState_GSBase::AddPreloadedAsset(UObject* Obj) const {
}


