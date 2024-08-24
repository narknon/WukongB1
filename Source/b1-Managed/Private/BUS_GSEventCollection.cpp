#include "BUS_GSEventCollection.h"

UBUS_GSEventCollection::UBUS_GSEventCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBUS_GSEventCollection::Evt_TestPredictServer_Implementation(int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TeleportBegin_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_ServerRPCTest_Invoke_Implementation(int32 p1, FVector p2) {
}

void UBUS_GSEventCollection::Evt_TestPredictMultiCast_Implementation() {
}

void UBUS_GSEventCollection::Evt_ClientRPCTest_Invoke_Implementation(int32 p1, AActor* p2) {
}

void UBUS_GSEventCollection::Evt_UnitStatePredicServer_Implementation(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TeleportFinish_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_InputActionPressServer_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_ClearTargetInfo_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_TriggerJumpSkillServer_Implementation(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_ExecuteCommandGMServer_Implementation(TArray<FString> P) {
}

void UBUS_GSEventCollection::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UBUS_GSEventCollection::Evt_TriggerHitInPartServer_Implementation(int32 PartId, float HitHP, int32 HitWeight) {
}

void UBUS_GSEventCollection::Evt_NotifyGraphClientServer_Implementation(const FString& FinalGuid, FGameplayTag NotifyTag) {
}

void UBUS_GSEventCollection::Evt_RotateToTargetSvrServer_Implementation(float p1) {
}

void UBUS_GSEventCollection::Evt_TriggerPlayerRestServer_Implementation() {
}

void UBUS_GSEventCollection::Evt_SmartCastSkillTryServer_Implementation(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_StopSlotAnimationServer_Implementation(float p1) {
}

void UBUS_GSEventCollection::Evt_UnitStatePredicMultiCast_Implementation(EBGUUnitState UnitState, bool NeedForceUpdate, float Time) {
}

void UBUS_GSEventCollection::Evt_InputActionReleaseServer_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_ChargeSkillSuccessServer_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::BeginPlayInCS_Implementation() {
}

void UBUS_GSEventCollection::Evt_BuffAdd_Multicast_Invoke_Implementation(int32 BuffID, AActor* Caster, AActor* RootCaster, float Duration, BuffSourceType BuffSourceType, bool bRecursed, FBattleAttrSnapShot BattleAttrSnapShot) {
}

void UBUS_GSEventCollection::Evt_DropCollectionItemServer_Implementation(AActor* Player, int32 DropId, int32 DropLevel) {
}

void UBUS_GSEventCollection::Evt_TriggerJumpSkillMultiCast_Implementation(SkillDirection StartJumpDir, FVector2D CurrentInput) {
}

void UBUS_GSEventCollection::Evt_UnitDead_Multicast_Invoke_Implementation(AActor* Attacker, DeadReason DeadReason, int32 DmgID, int32 StiffLevel, UAnimMontage* BeAttackedAM, FEffectInstReq EffectInstReq, bool bIsDotDmg, AbnormalStateType AbnormalStateType) {
}

void UBUS_GSEventCollection::Evt_Camera_ClearCamLockServer_Implementation() {
}

void UBUS_GSEventCollection::Evt_TriggerHitInPartMultiCast_Implementation(int32 PartId, float HitHP, int32 HitWeight) {
}

void UBUS_GSEventCollection::Evt_InputActionPressMultiCast_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_ExecuteCommandGMMultiCast_Implementation(TArray<FString> P) {
}

void UBUS_GSEventCollection::Evt_RotateToTargetSvrMultiCast_Implementation(float p1) {
}

void UBUS_GSEventCollection::Evt_OnlineChallengeBeginServer_Implementation(int32 p1, int32 p2) {
}

void UBUS_GSEventCollection::Evt_SmartCastSkillTryMultiCast_Implementation(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast) {
}

void UBUS_GSEventCollection::Evt_SetTargetInfoServer_Invoke_Implementation(FUnitLockTargetInfo NewTargetInfo) {
}

void UBUS_GSEventCollection::Evt_TriggerPlayerRestMultiCast_Implementation() {
}

void UBUS_GSEventCollection::Evt_NotifyGraphClientMultiCast_Implementation(const FString& FinalGuid, FGameplayTag NotifyTag) {
}

void UBUS_GSEventCollection::Evt_TestPredict_Confirm_Client_Implementation(int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_StopSlotAnimationMultiCast_Implementation(float p1) {
}

void UBUS_GSEventCollection::Evt_TriggerRootMotionJumpServer_Implementation(int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_BuffRemove_Multicast_Invoke_Implementation(int32 BuffID, BuffEffectTriggerType RemoveTriggerType, int32 Layer, bool WithTriggerRemmoveEffect) {
}

void UBUS_GSEventCollection::Evt_ChargeSkillSuccessMultiCast_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_InputActionReleaseMultiCast_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_TestPredict_RollBack_Client_Implementation(int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_DropCollectionItemMultiCast_Implementation(AActor* Player, int32 DropId, int32 DropLevel) {
}

void UBUS_GSEventCollection::Evt_FinishRescueInteract_Invoke_Implementation(AActor* Target) {
}

void UBUS_GSEventCollection::Evt_UnitRebirth_Multicast_Invoke_Implementation(RebirthType RebirthType) {
}

void UBUS_GSEventCollection::Evt_RebirthTeleportFinish_Invoke_Implementation(RebirthType State) {
}

void UBUS_GSEventCollection::Evt_SkillRotate_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_Camera_ClearCamLockMultiCast_Implementation() {
}

void UBUS_GSEventCollection::Evt_OnlineChallengeBeginMultiCast_Implementation(int32 p1, int32 p2) {
}

void UBUS_GSEventCollection::Evt_FinishRescue_Multicast_Invoke_Implementation(AActor* Target) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2Server_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_RecoveryPartDamageValueServer_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest1Server_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_CastSkillWithAnimMontageServer_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitStatePredic_Confirm_Client_Implementation(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_AddBuffNotify_Multicast_Invoke_Implementation(bool IsHasBuffBefore, AActor* Caster, int32 BuffID, float BuffDuration) {
}

void UBUS_GSEventCollection::Evt_BuffAllRemove_Multicast_Invoke_Implementation(BuffEffectTriggerType RemoveTriggerType, bool WithTriggerRemmoveEffect) {
}

void UBUS_GSEventCollection::Evt_GMUnitSuicide_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_TriggerRootMotionJumpMultiCast_Implementation() {
}

void UBUS_GSEventCollection::Evt_UnitStatePredic_RollBack_Client_Implementation(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffectServer_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerEndSave_Multicast_Invoke_Implementation(bool Success, AActor* Saver, AActor* BeSaver) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffectBySkillServer_Implementation(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_ActivateTalent_Multicast_Invoke_Implementation(int32 TalentID, int32 ChangeLevel) {
}

void UBUS_GSEventCollection::Evt_UnitEquipFaBao_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_TriggerJumpSkill_Confirm_Client_Implementation(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest1MultiCast_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2MultiCast_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_UnitCastSkillTryCMultiCastServer_Implementation(FCastSkillInfo CSI, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerJumpSkill_RollBack_Client_Implementation(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitStateTriggerCMultiCastServer_Implementation(EBUStateTrigger TriggerId, float Time, bool NeedForceUpdate) {
}

void UBUS_GSEventCollection::Evt_RecoveryPartDamageValueMultiCast_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_SmartCastSkillTry_Confirm_Client_Implementation(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_RoleLevelChange_Multicast_Invoke_Implementation(int32 OldRoleLevel, int32 NewRoleLevel) {
}

void UBUS_GSEventCollection::Evt_SmartCastSkillTry_RollBack_Client_Implementation(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitCastSkillTry_Multicast_Invoke_Implementation(FCastSkillInfo CSI) {
}

void UBUS_GSEventCollection::Evt_UpdateBuffCaster_Multicast_Invoke_Implementation(AActor* Actor1, AActor* Actor2, int32 p1) {
}

void UBUS_GSEventCollection::Evt_OnProjectileDead_Multicast_Invoke_Implementation(EBGUBulletDestroyReason Reason) {
}

void UBUS_GSEventCollection::Evt_TriggerFallDying_Multicast_Invoke_Implementation(AActor* Actor) {
}

void UBUS_GSEventCollection::Evt_RemoveBuffNotify_Multicast_Invoke_Implementation(int32 p1, int32 p2) {
}

void UBUS_GSEventCollection::Evt_CastSkillWithAnimMontageMultiCast_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_DeactivateTalent_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_TransmitServer_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitUnequipFaBao_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_SetActorTransform_Multicast_Invoke_Implementation(FTransform NewTransform, bool bSweep, bool bTeleport) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffectMultiCast_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData) {
}

void UBUS_GSEventCollection::Evt_TriggrtInteractOnOtherClientServer_Implementation(AActor* Target) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffectBySkillMultiCast_Implementation(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq) {
}

void UBUS_GSEventCollection::Evt_TriggerGainKeyItem_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_SetActorLocationGM_Multicast_Invoke_Implementation(FVector NewLocation, bool bSweep, bool bTeleport) {
}

void UBUS_GSEventCollection::Evt_BuffInstsDictOnAdd_Multicast_Invoke_Implementation(int32 BuffID, float Duration, BuffSourceType BuffSourceType, AActor* Caster) {
}

void UBUS_GSEventCollection::Evt_UnitRebirth_ByItem_Multicast_Invoke_Implementation(RebirthType RebirthType) {
}

void UBUS_GSEventCollection::Evt_MoveWithAnimMontageCMultiCastServer_Implementation(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitStateTriggerCMultiCastMultiCast_Implementation(EBUStateTrigger TriggerId, float Time, bool NeedForceUpdate) {
}

void UBUS_GSEventCollection::Evt_UnitCastSkillTryCMultiCastMultiCast_Implementation(FCastSkillInfo CSI) {
}

void UBUS_GSEventCollection::Evt_InitDaShenEquipData_Multicast_Invoke_Implementation(EquipPosition EquipPosition, int32 EquipID) {
}

void UBUS_GSEventCollection::Evt_TriggerRootMotionJump_Confirm_Client_Implementation(int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_MoveWithAnimMontage_Multicast_Invoke_Implementation(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_TeleportWithRebirthPointFailedServer_Implementation(int32 RebirthPointConfigID, TeleportReason TeleportReason) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_TransmitMultiCast_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent) {
}

void UBUS_GSEventCollection::Evt_SwitchNoInteraction_Multicast_Invoke_Implementation(bool p1) {
}

void UBUS_GSEventCollection::Evt_TriggerRootMotionJump_RollBack_Client_Implementation(int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_OnIncreaseMaxPELevel_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_InteractGroup_Update_Multicast_Invoke_Implementation(int32 GroupId, EBGUInteractUnitState InteractUnitState) {
}

void UBUS_GSEventCollection::Evt_TriggrtInteractOnOtherClientMultiCast_Implementation(AActor* Target) {
}

void UBUS_GSEventCollection::Evt_MoveWithAnimMontageCMultiCastMultiCast_Implementation(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason) {
}

void UBUS_GSEventCollection::Evt_TriggerResetAllActors_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_SpawnBulletFXByReason_Multicast_Invoke_Implementation(EBGUBulletDispReason BulletDispReason, FEffectInstReq EffectInstReq, AActor* BeHitActor) {
}

void UBUS_GSEventCollection::Evt_ShouledUpdateBuffTime_Multicast_Invoke_Implementation(bool p1) {
}

void UBUS_GSEventCollection::Evt_BuffRemoveImmediately_Multicast_Invoke_Implementation(int32 BuffID, BuffEffectTriggerType RemoveTriggerType, bool WithTriggerRemmoveEffect) {
}

void UBUS_GSEventCollection::Evt_BuffInstsDictOnRemove_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2_Confirm_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_SkillRotateTraceActor_Multicast_Invoke_Implementation(AActor* TargetActor, float turnSpeed) {
}

void UBUS_GSEventCollection::Evt_FTB_IncreaseAttrFloat_Multicast_Invoke_Implementation(EBGUAttrFloat AttrID, float IncreaseValue) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2_RollBack_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_OnlineChallengeEndToUI_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2SPTransmitServer_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_BattleLogicChangeEquip_Multicast_Invoke_Implementation(EquipPosition EquipPosition, int32 EquipID) {
}

void UBUS_GSEventCollection::Evt_CastSkillWithAnimMontage_Confirm_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TeleportWithRebirthPointFailedMultiCast_Implementation(int32 RebirthPointConfigID, TeleportReason TeleportReason) {
}

void UBUS_GSEventCollection::Evt_SceneObjTransitByEvent_Multicast_Invoke_Implementation(FGameplayTag Tag) {
}

void UBUS_GSEventCollection::Evt_OnClientBeginPlayReqForInitEquip_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffectBySkill_Confirm_Client_Implementation(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffect_Confirm_Client_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_CastSkillWithAnimMontage_RollBack_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffectBySkill_RollBack_Client_Implementation(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_UnitCastSkillTryCMultiCast_Confirm_Client_Implementation(FCastSkillInfo CSI, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffect_RollBack_Client_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_RelieveImmobilizedClient_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffectByBuff_Multicast_Invoke_Implementation(int32 BuffID, AActor* Target, int32 EffectIdx, FEffectInstReq EffectInstReq, bool bIsPeriodical) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffectSPTransmitServer_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_OnBuffLayerChangedNotify_Multicast_Invoke_Implementation(int32 BuffID, int32 Layer_OldValue, int32 Layer_NewValue) {
}

void UBUS_GSEventCollection::Evt_OnlineChallengeBeginToUI_Multicast_Invoke_Implementation(int32 p1, int32 p2) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_Transmit_Confirm_Client_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_ChangeMotionMatchingState_Multicast_Invoke_Implementation(State_MM MMState) {
}

void UBUS_GSEventCollection::Evt_ChallenegeRebirthTeleport_Multicast_Invoke_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_UnitCastSkillTryCMultiCast_RollBack_Client_Implementation(FCastSkillInfo CSI, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2SPTransmitMultiCast_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_SetTargetInfoWithCameraLockingServer_Invoke_Implementation(FUnitLockTargetInfo NewTargetInfo) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_TransmitSPTransmitServer_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_Transmit_RollBack_Client_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffectSPTransmitMultiCast_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_MoveWithAnimMontageCMultiCast_Confirm_Client_Implementation(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_MoveWithAnimMontageCMultiCast_RollBack_Client_Implementation(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionMultiCast_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_SetAMScaleRateByPosMultiCast_Multicast_Invoke_Implementation(EAMScaleType AMScaleType, EAMScaleRateAxis AMScaleAxis, float LandingTraceLength, float PureScaleValue, int32 CachedDataID, bool AttackRangeLimit, bool DebugMode, float TotalDuration, float NotifyBeginTime, float NotifyEndTime, float AMScaleMinRate, float AMScaleMaxRate, float AMScaleMoveOffset, float AMScaleMoveOffsetZ) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_TransmitSPTransmitMultiCast_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_BattleLogicResetEquipIllusion_Multicast_Invoke_Implementation() {
}

void UBUS_GSEventCollection::Evt_BattleLogicChangeEquipIllusion_Multicast_Invoke_Implementation(const FString& EquipIllusionConfigPath) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2_SPTransmitConfirm_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionIntMultiCast_Multicast_Invoke_Implementation(int32 p1) {
}

void UBUS_GSEventCollection::Evt_ClientMultiCastRPCTest2_SPTransmitRollBack_Client_Implementation(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionNameMultiCast_Multicast_Invoke_Implementation(FName p1) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionFloatMultiCast_Multicast_Invoke_Implementation(float p1) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionActorMultiCast_Multicast_Invoke_Implementation(AActor* Actor) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffect_SPTransmitConfirm_Client_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_SceneObjTransitByEventNoSaveState_Multicast_Invoke_Implementation(FGameplayTag Tag) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionObjectMultiCast_Multicast_Invoke_Implementation(UObject* Object) {
}

void UBUS_GSEventCollection::Evt_TriggerNormalDamageEffect_SPTransmitRollBack_Client_Implementation(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionStringMultiCast_Multicast_Invoke_Implementation(const FString& p1) {
}

void UBUS_GSEventCollection::Evt_TestEventCollectionVectorMultiCast_Multicast_Invoke_Implementation(FVector Vector) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_Transmit_SPTransmitConfirm_Client_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, AActor* __TriggerActor) {
}

void UBUS_GSEventCollection::Evt_TriggerSkillEffect_Transmit_SPTransmitRollBack_Client_Implementation(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, AActor* __TriggerActor) {
}


