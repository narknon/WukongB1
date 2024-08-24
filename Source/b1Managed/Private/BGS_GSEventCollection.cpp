#include "BGS_GSEventCollection.h"

UBGS_GSEventCollection::UBGS_GSEventCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBGS_GSEventCollection::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UBGS_GSEventCollection::BeginPlayInCS_Implementation() {
}

void UBGS_GSEventCollection::Evt_BGS_TriggerShortcutServer_Implementation(bool b1, int32 p2) {
}

void UBGS_GSEventCollection::Evt_PostMulticastAkEventServer_Implementation(UAkAudioEvent* AkEvent) {
}

void UBGS_GSEventCollection::Evt_TeamWipeOut_Multicast_Invoke_Implementation() {
}

void UBGS_GSEventCollection::Evt_BGS_TriggerShortcutMultiCast_Implementation(bool b1, int32 p2) {
}

void UBGS_GSEventCollection::Evt_BGS_UnitDead_Multicast_Invoke_Implementation(const FString& UnitGuid, DeadReason DeadReason) {
}

void UBGS_GSEventCollection::Evt_PostMulticastAkEventMultiCast_Implementation(UAkAudioEvent* AkEvent) {
}

void UBGS_GSEventCollection::Evt_CrusadeSuccess_Multicast_Invoke_Implementation() {
}

void UBGS_GSEventCollection::Evt_BGS_PlayerJoin_Multicast_Invoke_Implementation(APlayerState* PlayerState) {
}

void UBGS_GSEventCollection::Evt_BGS_PlayerLogOut_Multicast_Invoke_Implementation(APlayerState* PlayerState) {
}

void UBGS_GSEventCollection::Evt_BGS_TestGameState_Multicast_Invoke_Implementation(int32 p1) {
}

void UBGS_GSEventCollection::Evt_OnlineDebugInfoEnd_Multicast_Invoke_Implementation() {
}

void UBGS_GSEventCollection::Evt_BGS_ItemFullOnline_Multicast_Invoke_Implementation(int32 p1) {
}

void UBGS_GSEventCollection::Evt_BGS_OnPlayerLogOut_Multicast_Invoke_Implementation(AController* Exitting) {
}

void UBGS_GSEventCollection::Evt_BGS_OnUnitTransited_Multicast_Invoke_Implementation(AActor* OldUnit, AActor* NewlySpawnedUnit) {
}

void UBGS_GSEventCollection::Evt_BGS_OnPlayerPostLogin_Multicast_Invoke_Implementation(APlayerController* NewPlayer) {
}

void UBGS_GSEventCollection::Evt_BGS_NotifySwitchTarget_Multicast_Invoke_Implementation(AActor* OldTarget, AActor* NewTarget, bool TriggerTaunt, TargetSourceType TargetSourceType) {
}

void UBGS_GSEventCollection::Evt_BGS_SendOnlineScreenMsg_Multicast_Invoke_Implementation(ScreenMsgType ScreenMsgType, const FString& Msg, int32 TipsDuration) {
}

void UBGS_GSEventCollection::Evt_BGS_SwitchTickRateLogic_Multicast_Invoke_Implementation(int32 p1) {
}

void UBGS_GSEventCollection::Evt_BGS_NotifyCopyHatredInfo_Multicast_Invoke_Implementation(AActor* OriginActor, AActor* CopyActor, bool bRemoveOriginHatredInfo) {
}

void UBGS_GSEventCollection::Evt_BGS_OnlineChallengeStateTrigger_Multicast_Invoke_Implementation(int32 p1, int32 p2) {
}


