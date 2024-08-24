#include "BGP_AIPlayerControllerCS.h"

ABGP_AIPlayerControllerCS::ABGP_AIPlayerControllerCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComp = NULL;
    this->ActorCompContainerCS = NULL;
    this->EventCollection = NULL;
}

void ABGP_AIPlayerControllerCS::GSRpcSendServer_Implementation(TArray<uint8> SendData) {
}

void ABGP_AIPlayerControllerCS::GSRpcSendClient_Implementation(TArray<uint8> SendData) {
}


