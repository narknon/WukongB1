#include "GSE_OnlineFuncLib.h"

UGSE_OnlineFuncLib::UGSE_OnlineFuncLib() {
}

FName UGSE_OnlineFuncLib::SlowMakeUniqueObjectName(UObject* Parent, const UClass* Class, FName InBaseName) {
    return NAME_None;
}

void UGSE_OnlineFuncLib::SetGameDefaultMap(const FString& NewMap) {
}

int64 UGSE_OnlineFuncLib::ServerReplicateOneActorToPlayer(AActor* Actor, APlayerController* PlayerController) {
    return 0;
}

void UGSE_OnlineFuncLib::ResetNetGuidAckStat(int64 Guid, UNetConnection* NetConnection) {
}

void UGSE_OnlineFuncLib::RegisterNetGuid(int64 Guid, UObject* Obj) {
}

void UGSE_OnlineFuncLib::MarkActorRoleDirty(AActor* Actor) {
}

bool UGSE_OnlineFuncLib::IsActorChannelReadyForServer(AActor* Actor, APlayerController* PlayerController) {
    return false;
}

bool UGSE_OnlineFuncLib::IsActorChannelReadyForClient(AActor* Actor) {
    return false;
}

bool UGSE_OnlineFuncLib::InServerReal(UObject* WorldCtx) {
    return false;
}

FString UGSE_OnlineFuncLib::GetUniqueNetIdStringByPlayerState(APlayerState* PlayerState) {
    return TEXT("");
}

FString UGSE_OnlineFuncLib::GetUniqueNetIdStringByPlayerController(APlayerController* Controller) {
    return TEXT("");
}

FString UGSE_OnlineFuncLib::GetUniqueNetIdStringByFUniqueNetIdRepl(FUniqueNetIdRepl UniqueId) {
    return TEXT("");
}

UObject* UGSE_OnlineFuncLib::GetReplicationGraph(UObject* WorldCtx) {
    return NULL;
}

int64 UGSE_OnlineFuncLib::GetObjNetGuidByChannel(UActorChannel* Channel) {
    return 0;
}

int64 UGSE_OnlineFuncLib::GetObjNetGuid(UObject* Obj) {
    return 0;
}

UObject* UGSE_OnlineFuncLib::GetObjByNetGuid(UObject* WorldCtx, int64 Guid) {
    return NULL;
}

FString UGSE_OnlineFuncLib::GetGameDefaultMap() {
    return TEXT("");
}

AActor* UGSE_OnlineFuncLib::GetActorChannelActor(UActorChannel* Channel) {
    return NULL;
}

void UGSE_OnlineFuncLib::GEngineHandleDisconnect(UWorld* World) {
}

bool UGSE_OnlineFuncLib::ForceRemoveNetGuid(UObject* Obj) {
    return false;
}

void UGSE_OnlineFuncLib::CloseServerConnection(EGSNetCloseResult CloseResult, UObject* WorldContext) {
}

void UGSE_OnlineFuncLib::CloseClientConnection(EGSNetCloseResult CloseResult, APlayerController* ClientPlayerController) {
}

bool UGSE_OnlineFuncLib::CloseActorChannelByActorAndPlayerController(AActor* Actor, APlayerController* PlayerController, int32 CloseReason) {
    return false;
}

bool UGSE_OnlineFuncLib::ActorChannelValid(AActor* Actor, APlayerController* PlayerController) {
    return false;
}

bool UGSE_OnlineFuncLib::ActorChannelOpenAcked(AActor* Actor, APlayerController* PlayerController) {
    return false;
}


