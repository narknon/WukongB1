#include "BGUCharacterCS.h"
#include "ActorCompContainerCS.h"
#include "BUS_BGUDataComp.h"

ABGUCharacterCS::ABGUCharacterCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->BGUDataComp = CreateDefaultSubobject<UBUS_BGUDataComp>(TEXT("UBGUDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}

bool ABGUCharacterCS::GetActorGuidCS_Implementation(FString& OutActorGuid) const {
    return false;
}

void ABGUCharacterCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGUCharacterCS::ReceiveBeginPlay_Implementation() {
}

void ABGUCharacterCS::ReceiveDestroyed_Implementation() {
}

void ABGUCharacterCS::OnActorChannelOpen_Implementation(UNetConnection* Connection) {
}

bool ABGUCharacterCS::IsPlayerCharacterCS_Implementation() {
    return false;
}

void ABGUCharacterCS::PostNetReceiveRoleCS_Implementation() {
}

APlayerController* ABGUCharacterCS::GetGSAuthorityPlayerCS_Implementation() {
    return NULL;
}

void ABGUCharacterCS::OnMovementModeChangedCS_Implementation(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode) {
}

void ABGUCharacterCS::PostInitializeComponentsCS_Implementation() {
}

void ABGUCharacterCS::PreDestroyFromReplicationCS_Implementation() {
}


