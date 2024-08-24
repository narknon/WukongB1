#include "BGGGameStateCS.h"

ABGGGameStateCS::ABGGGameStateCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainerCS = NULL;
}

void ABGGGameStateCS::BeginPlayCS_Implementation() {
}

void ABGGGameStateCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGGGameStateCS::ReceiveDestroyed_Implementation() {
}

void ABGGGameStateCS::HandleBeginPlayCS_Implementation() {
}

void ABGGGameStateCS::HandleLeavingMapCS_Implementation() {
}

void ABGGGameStateCS::OnTickDispatchEventCS_Implementation(float DeltaTime) {
}

void ABGGGameStateCS::HandleMatchHasEndedCS_Implementation() {
}

void ABGGGameStateCS::HandleMatchHasStartedCS_Implementation() {
}

bool ABGGGameStateCS::IsGSEventDebuggerOpenCS_Implementation() {
    return false;
}

void ABGGGameStateCS::OnPostTickDispatchEventCS_Implementation() {
}

void ABGGGameStateCS::PostInitializeComponentsCS_Implementation() {
}

void ABGGGameStateCS::HandleMatchIsWaitingToStartCS_Implementation() {
}


