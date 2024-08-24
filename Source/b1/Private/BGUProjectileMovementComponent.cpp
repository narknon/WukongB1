#include "BGUProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

UBGUProjectileMovementComponent::UBGUProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceEnableSimulateWithoutBounce = false;
    this->bComputeMoveDeltaOnClient = true;
}

void UBGUProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBGUProjectileMovementComponent, RepLocation);
}


