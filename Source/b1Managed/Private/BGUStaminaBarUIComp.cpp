#include "BGUStaminaBarUIComp.h"

UBGUStaminaBarUIComp::UBGUStaminaBarUIComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawDebug = false;
    this->PlayerCameraManager = NULL;
}

void UBGUStaminaBarUIComp::SetGSEnabled(bool IsEnabled) {
}

void UBGUStaminaBarUIComp::BeginPlayGS_Implementation() {
}

void UBGUStaminaBarUIComp::TickComponentGS_Implementation(float DeltaTime) {
}


