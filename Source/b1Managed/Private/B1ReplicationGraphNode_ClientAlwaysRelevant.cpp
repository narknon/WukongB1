#include "B1ReplicationGraphNode_ClientAlwaysRelevant.h"

UB1ReplicationGraphNode_ClientAlwaysRelevant::UB1ReplicationGraphNode_ClientAlwaysRelevant() {
}

void UB1ReplicationGraphNode_ClientAlwaysRelevant::NotifyAddNetworkActorCS_Implementation(AActor* Actor) {
}

bool UB1ReplicationGraphNode_ClientAlwaysRelevant::NotifyRemoveNetworkActorCS_Implementation(AActor* Actor, bool bWarnIfNotFound) {
    return false;
}

void UB1ReplicationGraphNode_ClientAlwaysRelevant::GatherActorListsForConnectionCS_Implementation(APlayerController* PlayerController) {
}


