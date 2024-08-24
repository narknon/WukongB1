#include "AnimNotify_GSBase.h"

UAnimNotify_GSBase::UAnimNotify_GSBase() {
    this->CanBePlacedInASCS = true;
    this->isPreload = false;
}

void UAnimNotify_GSBase::GSValidateInputCS_Implementation(AActor* Actor) const {
}





TArray<UObject*> UAnimNotify_GSBase::GetPreloadedAssets() const {
    return TArray<UObject*>();
}


EGsEnAnimN UAnimNotify_GSBase::GetAnimNType_Implementation() const {
    return EGsEnAnimN::None;
}

bool UAnimNotify_GSBase::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}

void UAnimNotify_GSBase::AddPreloadedAsset(UObject* Obj) const {
}


