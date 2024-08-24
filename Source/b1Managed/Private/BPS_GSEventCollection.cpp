#include "BPS_GSEventCollection.h"

UBPS_GSEventCollection::UBPS_GSEventCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBPS_GSEventCollection::Evt_RequestSummon_Invoke_Implementation(FSummonReq InSummonReq) {
}

void UBPS_GSEventCollection::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UBPS_GSEventCollection::BeginPlayInCS_Implementation() {
}

void UBPS_GSEventCollection::Evt_BPS_SyncRoleDataTmp_Invoke_Implementation(TArray<uint8> RoleData) {
}

void UBPS_GSEventCollection::Evt_TmpTransSendDropItem_Invoke_Implementation(int32 p1) {
}

void UBPS_GSEventCollection::Evt_BPS_ServerActivateTamer_Invoke_Implementation(TArray<FString> Guids) {
}

void UBPS_GSEventCollection::Evt_SendServantReq_Multicast_Invoke_Implementation(FServantReq InServantReq) {
}

void UBPS_GSEventCollection::Evt_CloseConnectionWithResult_Invoke_Implementation(EGSNetCloseResult CloseResult) {
}

void UBPS_GSEventCollection::Evt_BPS_ServerSpawnDynamicTamer_Invoke_Implementation(FDynamicTamerSpawnReq TamerClass) {
}

void UBPS_GSEventCollection::Evt_BPS_TestPlayerState_Multicast_Invoke_Implementation(int32 p1) {
}

void UBPS_GSEventCollection::Evt_BPS_ClientInitCharacterNetRole_Invoke_Implementation(TArray<FTamerRoleSync> Guids) {
}

void UBPS_GSEventCollection::Evt_BPS_SwitchPlayerTransState_Multicast_Invoke_Implementation(AActor* OldActor, int32 NewActorResId) {
}

void UBPS_GSEventCollection::Evt_BPS_ServerNotifyClientTamerBackToLoad_Invoke_Implementation(TArray<FString> Guids) {
}

void UBPS_GSEventCollection::Evt_BPS_ServerNotifyClientAuthorityTamerDead_Invoke_Implementation(TArray<FString> Guids) {
}


