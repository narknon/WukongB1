#include "B1ReplicationGraph.h"

UB1ReplicationGraph::UB1ReplicationGraph() {
    this->AlwaysRelevantNode = NULL;
}


void UB1ReplicationGraph::SetRoleSwapOnReplicateCS(AActor* Actor, bool Swap) {
}

void UB1ReplicationGraph::SetGlobalReplicationClassInfo(UClass* ReplicatedClass, float CullDistanceSquared, int32 ReplicationPeriodFrame) {
}

void UB1ReplicationGraph::SetAlwaysRelevantNodeCS(UB1ReplicationGraphNode_CSBase* AlwaysRelevantNodeCS) {
}





void UB1ReplicationGraph::RemoveConnectionGraphNodeCS(UReplicationGraphNode* GraphNode, UNetReplicationGraphConnection* ConnectionManager) {
}

void UB1ReplicationGraph::RemoveBGUCharacterFromAlwaysRelevantNodeCS(ABGUCharacter* Actor) {
}

void UB1ReplicationGraph::InitNodeCS(UB1ReplicationGraphNode_CSBase* CSNode) {
}





UWorld* UB1ReplicationGraph::GetWorldCS() {
    return NULL;
}

UNetConnection* UB1ReplicationGraph::GetServerConnectionCS() {
    return NULL;
}

UB1NetReplicationGraphConnection* UB1ReplicationGraph::GetReplicationGraphConnectionByPC(APlayerController* PlayerController) {
    return NULL;
}

UNetReplicationGraphConnection* UB1ReplicationGraph::GetConnectionByIndexCS(int32 Idx) {
    return NULL;
}

void UB1ReplicationGraph::ClienResetActorChannelCS(ABGUCharacter* Actor) {
}


void UB1ReplicationGraph::AddConnectionGraphNodeCS(UReplicationGraphNode* GraphNode, UNetReplicationGraphConnection* ConnectionManager) {
}

void UB1ReplicationGraph::AddBGUCharacterToAlwaysRelevantNodeCS(ABGUCharacter* Actor) {
}


