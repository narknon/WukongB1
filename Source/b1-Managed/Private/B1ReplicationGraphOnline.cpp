#include "B1ReplicationGraphOnline.h"

UB1ReplicationGraphOnline::UB1ReplicationGraphOnline() {
}

void UB1ReplicationGraphOnline::AddNetworkActorCS_Implementation(AActor* Actor) {
}

void UB1ReplicationGraphOnline::GSNetworkRemapPathCS_Implementation(UObject* Outer, const FString& OriginName, FString& Name) {
}

void UB1ReplicationGraphOnline::RemoveNetworkActorCS_Implementation(AActor* Actor) {
}

void UB1ReplicationGraphOnline::InitConnectionGraphNodesCS_Implementation(UNetReplicationGraphConnection* RepGraphConnection) {
}

void UB1ReplicationGraphOnline::InitGlobalActorClassSettingsCS_Implementation() {
}

bool UB1ReplicationGraphOnline::ShouldServerMultiCastRPCForPlayerCS_Implementation(APlayerController* Controller, AActor* Actor, int64 FuncAddr) {
    return false;
}


