#include "BGUCreateDeadConfigComp.h"

UBGUCreateDeadConfigComp::UBGUCreateDeadConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SmallSizeUDDConfig = NULL;
    this->MediumSizeUDDConfig = NULL;
    this->MediumBigSizeUDDConfig = NULL;
    this->BigSizeUDDConfig = NULL;
    this->HugeSizeUDDConfig = NULL;
}

void UBGUCreateDeadConfigComp::ReceiveTick_Implementation(float DeltaSeconds) {
}

void UBGUCreateDeadConfigComp::BeginPlayInCS_Implementation() {
}


