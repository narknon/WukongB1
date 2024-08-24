#include "BGP_PlayerControllerCS.h"

ABGP_PlayerControllerCS::ABGP_PlayerControllerCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->DataComp = NULL;
    this->ActorCompContainerCS = NULL;
    this->EventCollection = NULL;
}

void ABGP_PlayerControllerCS::GSRpcSendServer_Implementation(TArray<uint8> SendData) {
}

void ABGP_PlayerControllerCS::GSRpcSendClient_Implementation(TArray<uint8> SendData) {
}

void ABGP_PlayerControllerCS::OnControlledPawnChange(AActor* OldPawn, AActor* NewPawn) {
}

void ABGP_PlayerControllerCS::BeginPlayCS_Implementation() {
}

void ABGP_PlayerControllerCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGP_PlayerControllerCS::ConsoleCommandCS_Implementation(const FString& Command) {
}

void ABGP_PlayerControllerCS::InitInputSystemCS_Implementation() {
}

void ABGP_PlayerControllerCS::OnRep_PlayerStateCS_Implementation() {
}

bool ABGP_PlayerControllerCS::GetPlayerViewPointCS_Implementation(FVector& out_Location, FRotator& out_Rotation) const {
    return false;
}

void ABGP_PlayerControllerCS::GetSeamlessTravelActorListCS_Implementation(bool bToEntry, TArray<AActor*>& ActorList) {
}


