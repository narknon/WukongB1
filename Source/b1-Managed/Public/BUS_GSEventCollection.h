#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BuffEffectTriggerType.h"
#include "DeadReason.h"
#include "EBGUAttrFloat.h"
#include "EBGUInteractUnitState.h"
#include "EquipPosition.h"
#include "GameplayTagContainer.h"
#include "AbnormalStateType.h"
#include "BattleAttrSnapShot.h"
#include "BuffSourceType.h"
#include "CastSkillInfo.h"
#include "EAMScaleRateAxis.h"
#include "EAMScaleType.h"
#include "EBGUBulletDestroyReason.h"
#include "EBGUBulletDispReason.h"
#include "EBGUUnitState.h"
#include "EBUStateTrigger.h"
#include "EffectInstReq.h"
#include "GSEventCollectionBase.h"
#include "MontageBindReason.h"
#include "RebirthType.h"
#include "SkillDamageConfig.h"
#include "SkillDirection.h"
#include "State_MM.h"
#include "TeleportReason.h"
#include "UnitLockTargetInfo.h"
#include "BUS_GSEventCollection.generated.h"

class AActor;
class UAnimMontage;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GSEventCollection : public UGSEventCollectionBase {
    GENERATED_BODY()
public:
    UBUS_GSEventCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TestPredictServer(int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TeleportBegin_Invoke();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_ServerRPCTest_Invoke(int32 p1, FVector p2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TestPredictMultiCast();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Evt_ClientRPCTest_Invoke(int32 p1, AActor* p2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_UnitStatePredicServer(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TeleportFinish_Invoke();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_InputActionPressServer(const FString& p1);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_ClearTargetInfo_Invoke();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerJumpSkillServer(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_ExecuteCommandGMServer(TArray<FString> P);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayInCS(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TriggerHitInPartServer(int32 PartId, float HitHP, int32 HitWeight);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_NotifyGraphClientServer(const FString& FinalGuid, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_RotateToTargetSvrServer(float p1);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TriggerPlayerRestServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_SmartCastSkillTryServer(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_StopSlotAnimationServer(float p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UnitStatePredicMultiCast(EBGUUnitState UnitState, bool NeedForceUpdate, float Time);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_InputActionReleaseServer(const FString& p1);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_ChargeSkillSuccessServer(int32 p1);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffAdd_Multicast_Invoke(int32 BuffID, AActor* Caster, AActor* RootCaster, float Duration, BuffSourceType BuffSourceType, bool bRecursed, FBattleAttrSnapShot BattleAttrSnapShot);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_DropCollectionItemServer(AActor* Player, int32 DropId, int32 DropLevel);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerJumpSkillMultiCast(SkillDirection StartJumpDir, FVector2D CurrentInput);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UnitDead_Multicast_Invoke(AActor* Attacker, DeadReason DeadReason, int32 DmgID, int32 StiffLevel, UAnimMontage* BeAttackedAM, FEffectInstReq EffectInstReq, bool bIsDotDmg, AbnormalStateType AbnormalStateType);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_Camera_ClearCamLockServer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggerHitInPartMultiCast(int32 PartId, float HitHP, int32 HitWeight);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_InputActionPressMultiCast(const FString& p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_ExecuteCommandGMMultiCast(TArray<FString> P);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_RotateToTargetSvrMultiCast(float p1);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_OnlineChallengeBeginServer(int32 p1, int32 p2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_SmartCastSkillTryMultiCast(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_SetTargetInfoServer_Invoke(FUnitLockTargetInfo NewTargetInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggerPlayerRestMultiCast();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_NotifyGraphClientMultiCast(const FString& FinalGuid, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TestPredict_Confirm_Client(int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_StopSlotAnimationMultiCast(float p1);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerRootMotionJumpServer(int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffRemove_Multicast_Invoke(int32 BuffID, BuffEffectTriggerType RemoveTriggerType, int32 Layer, bool WithTriggerRemmoveEffect);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_ChargeSkillSuccessMultiCast(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_InputActionReleaseMultiCast(const FString& p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TestPredict_RollBack_Client(int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_DropCollectionItemMultiCast(AActor* Player, int32 DropId, int32 DropLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_FinishRescueInteract_Invoke(AActor* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UnitRebirth_Multicast_Invoke(RebirthType RebirthType);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_RebirthTeleportFinish_Invoke(RebirthType State);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SkillRotate_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_Camera_ClearCamLockMultiCast();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_OnlineChallengeBeginMultiCast(int32 p1, int32 p2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_FinishRescue_Multicast_Invoke(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_ClientMultiCastRPCTest2Server(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_RecoveryPartDamageValueServer(int32 p1);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_ClientMultiCastRPCTest1Server(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_CastSkillWithAnimMontageServer(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_UnitStatePredic_Confirm_Client(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_AddBuffNotify_Multicast_Invoke(bool IsHasBuffBefore, AActor* Caster, int32 BuffID, float BuffDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffAllRemove_Multicast_Invoke(BuffEffectTriggerType RemoveTriggerType, bool WithTriggerRemmoveEffect);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_GMUnitSuicide_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerRootMotionJumpMultiCast();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_UnitStatePredic_RollBack_Client(EBGUUnitState UnitState, bool NeedForceUpdate, float Time, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerNormalDamageEffectServer(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerEndSave_Multicast_Invoke(bool Success, AActor* Saver, AActor* BeSaver);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerSkillEffectBySkillServer(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_ActivateTalent_Multicast_Invoke(int32 TalentID, int32 ChangeLevel);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_UnitEquipFaBao_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerJumpSkill_Confirm_Client(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_ClientMultiCastRPCTest1MultiCast(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_ClientMultiCastRPCTest2MultiCast(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_UnitCastSkillTryCMultiCastServer(FCastSkillInfo CSI, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerJumpSkill_RollBack_Client(SkillDirection StartJumpDir, FVector2D CurrentInput, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_UnitStateTriggerCMultiCastServer(EBUStateTrigger TriggerId, float Time, bool NeedForceUpdate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_RecoveryPartDamageValueMultiCast(int32 p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_SmartCastSkillTry_Confirm_Client(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_RoleLevelChange_Multicast_Invoke(int32 OldRoleLevel, int32 NewRoleLevel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_SmartCastSkillTry_RollBack_Client(int32 ID, TArray<int32> RuleIDList, MontageBindReason Reason, SkillDirection SkillDirection, bool bNeedCheckSkillCanCast, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_UnitCastSkillTry_Multicast_Invoke(FCastSkillInfo CSI);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UpdateBuffCaster_Multicast_Invoke(AActor* Actor1, AActor* Actor2, int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_OnProjectileDead_Multicast_Invoke(EBGUBulletDestroyReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggerFallDying_Multicast_Invoke(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_RemoveBuffNotify_Multicast_Invoke(int32 p1, int32 p2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_CastSkillWithAnimMontageMultiCast(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_DeactivateTalent_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerSkillEffect_TransmitServer(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_UnitUnequipFaBao_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_SetActorTransform_Multicast_Invoke(FTransform NewTransform, bool bSweep, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerNormalDamageEffectMultiCast(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TriggrtInteractOnOtherClientServer(AActor* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerSkillEffectBySkillMultiCast(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggerGainKeyItem_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SetActorLocationGM_Multicast_Invoke(FVector NewLocation, bool bSweep, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffInstsDictOnAdd_Multicast_Invoke(int32 BuffID, float Duration, BuffSourceType BuffSourceType, AActor* Caster);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UnitRebirth_ByItem_Multicast_Invoke(RebirthType RebirthType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_MoveWithAnimMontageCMultiCastServer(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_UnitStateTriggerCMultiCastMultiCast(EBUStateTrigger TriggerId, float Time, bool NeedForceUpdate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_UnitCastSkillTryCMultiCastMultiCast(FCastSkillInfo CSI);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_InitDaShenEquipData_Multicast_Invoke(EquipPosition EquipPosition, int32 EquipID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerRootMotionJump_Confirm_Client(int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_MoveWithAnimMontage_Multicast_Invoke(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_TeleportWithRebirthPointFailedServer(int32 RebirthPointConfigID, TeleportReason TeleportReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerSkillEffect_TransmitMultiCast(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_SwitchNoInteraction_Multicast_Invoke(bool p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerRootMotionJump_RollBack_Client(int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_OnIncreaseMaxPELevel_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_InteractGroup_Update_Multicast_Invoke(int32 GroupId, EBGUInteractUnitState InteractUnitState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggrtInteractOnOtherClientMultiCast(AActor* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_MoveWithAnimMontageCMultiCastMultiCast(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerResetAllActors_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SpawnBulletFXByReason_Multicast_Invoke(EBGUBulletDispReason BulletDispReason, FEffectInstReq EffectInstReq, AActor* BeHitActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_ShouledUpdateBuffTime_Multicast_Invoke(bool p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffRemoveImmediately_Multicast_Invoke(int32 BuffID, BuffEffectTriggerType RemoveTriggerType, bool WithTriggerRemmoveEffect);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BuffInstsDictOnRemove_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_ClientMultiCastRPCTest2_Confirm_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SkillRotateTraceActor_Multicast_Invoke(AActor* TargetActor, float turnSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_FTB_IncreaseAttrFloat_Multicast_Invoke(EBGUAttrFloat AttrID, float IncreaseValue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_ClientMultiCastRPCTest2_RollBack_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_OnlineChallengeEndToUI_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_ClientMultiCastRPCTest2SPTransmitServer(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BattleLogicChangeEquip_Multicast_Invoke(EquipPosition EquipPosition, int32 EquipID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_CastSkillWithAnimMontage_Confirm_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TeleportWithRebirthPointFailedMultiCast(int32 RebirthPointConfigID, TeleportReason TeleportReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SceneObjTransitByEvent_Multicast_Invoke(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_OnClientBeginPlayReqForInitEquip_Invoke();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffectBySkill_Confirm_Client(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerNormalDamageEffect_Confirm_Client(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_CastSkillWithAnimMontage_RollBack_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffectBySkill_RollBack_Client(int32 EffectID, AActor* Caster, AActor* Target, FEffectInstReq EffectInstReq, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_UnitCastSkillTryCMultiCast_Confirm_Client(FCastSkillInfo CSI, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerNormalDamageEffect_RollBack_Client(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_RelieveImmobilizedClient_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TriggerSkillEffectByBuff_Multicast_Invoke(int32 BuffID, AActor* Target, int32 EffectIdx, FEffectInstReq EffectInstReq, bool bIsPeriodical);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerNormalDamageEffectSPTransmitServer(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_OnBuffLayerChangedNotify_Multicast_Invoke(int32 BuffID, int32 Layer_OldValue, int32 Layer_NewValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_OnlineChallengeBeginToUI_Multicast_Invoke(int32 p1, int32 p2);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffect_Transmit_Confirm_Client(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_ChangeMotionMatchingState_Multicast_Invoke(State_MM MMState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_ChallenegeRebirthTeleport_Multicast_Invoke(const FString& p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_UnitCastSkillTryCMultiCast_RollBack_Client(FCastSkillInfo CSI, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_ClientMultiCastRPCTest2SPTransmitMultiCast(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_SetTargetInfoWithCameraLockingServer_Invoke(FUnitLockTargetInfo NewTargetInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TriggerSkillEffect_TransmitSPTransmitServer(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, int32 ParentPredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffect_Transmit_RollBack_Client(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerNormalDamageEffectSPTransmitMultiCast(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_MoveWithAnimMontageCMultiCast_Confirm_Client(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_MoveWithAnimMontageCMultiCast_RollBack_Client(UAnimMontage* Montage, float Scale, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionMultiCast_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_SetAMScaleRateByPosMultiCast_Multicast_Invoke(EAMScaleType AMScaleType, EAMScaleRateAxis AMScaleAxis, float LandingTraceLength, float PureScaleValue, int32 CachedDataID, bool AttackRangeLimit, bool DebugMode, float TotalDuration, float NotifyBeginTime, float NotifyEndTime, float AMScaleMinRate, float AMScaleMaxRate, float AMScaleMoveOffset, float AMScaleMoveOffsetZ);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_TriggerSkillEffect_TransmitSPTransmitMultiCast(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BattleLogicResetEquipIllusion_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BattleLogicChangeEquipIllusion_Multicast_Invoke(const FString& EquipIllusionConfigPath);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_ClientMultiCastRPCTest2_SPTransmitConfirm_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionIntMultiCast_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_ClientMultiCastRPCTest2_SPTransmitRollBack_Client(UAnimMontage* Montage, float PlayTimeRate, float MontagePosOffset, FName StartSectionName, MontageBindReason Reason, int32 PredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionNameMultiCast_Multicast_Invoke(FName p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionFloatMultiCast_Multicast_Invoke(float p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionActorMultiCast_Multicast_Invoke(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerNormalDamageEffect_SPTransmitConfirm_Client(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_SceneObjTransitByEventNoSaveState_Multicast_Invoke(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionObjectMultiCast_Multicast_Invoke(UObject* Object);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerNormalDamageEffect_SPTransmitRollBack_Client(AActor* Attacker, FSkillDamageConfig SkillDamageConfig, FEffectInstReq EffectInstReq, FBattleAttrSnapShot Attacker_AttrMemData, int32 PredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionStringMultiCast_Multicast_Invoke(const FString& p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TestEventCollectionVectorMultiCast_Multicast_Invoke(FVector Vector);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffect_Transmit_SPTransmitConfirm_Client(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, AActor* __TriggerActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_TriggerSkillEffect_Transmit_SPTransmitRollBack_Client(int32 EffectID, FEffectInstReq EffectInstReq, AActor* InnerTarget, bool bWithRPCEvent, int32 PredictionKeyId, AActor* __TriggerActor);
    
};

