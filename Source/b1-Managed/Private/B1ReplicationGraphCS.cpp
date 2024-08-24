#include "B1ReplicationGraphCS.h"
#include "B1NetReplicationGraphConnectionCS.h"

UB1ReplicationGraphCS::UB1ReplicationGraphCS() {
    this->ReplicationConnectionManagerClass = UB1NetReplicationGraphConnectionCS::StaticClass();
}

void UB1ReplicationGraphCS::AddNetworkActorCS_Implementation(AActor* Actor) {
}

void UB1ReplicationGraphCS::RemoveNetworkActorCS_Implementation(AActor* Actor) {
}


