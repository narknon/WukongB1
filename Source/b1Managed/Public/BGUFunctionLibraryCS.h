#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/RealCurve.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "AttrCostType.h"
#include "BuffEffectTriggerType.h"
#include "EBGUAttrFloat.h"
#include "Input/Events.h"
#include "AbnormalStateAccConfig.h"
#include "BuffSourceType.h"
#include "CastSkillSourceType.h"
#include "EBGUSimpleState.h"
#include "EBGUUnitState.h"
#include "EBPBuffID.h"
#include "EBUStateTrigger.h"
#include "PhysAnimType.h"
#include "PointsGenExtParam.h"
#include "PointsGenType.h"
#include "RenderTargetType.h"
#include "TamerStrategyArea.h"
#include "Templates/SubclassOf.h"
#include "BGUFunctionLibraryCS.generated.h"

class AActor;
class ABGUCharacterCS;
class ABGUPerformerActor;
class ABUTamerActor;
class ACameraActor;
class ACharacter;
class ACineCameraActor;
class APawn;
class APlayerController;
class UActorComponent;
class UAkAudioEvent;
class UAnimMontage;
class UAnimSequence;
class UBGWDataAsset_MagicallyChangeConfig;
class UBehaviorTree;
class UCurveFloat;
class UEnvQuery;
class UExponentialHeightFogComponent;
class UMatineeCameraShake;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UTextureRenderTarget2D;
class UWorld;

UCLASS(Blueprintable)
class UBGUFunctionLibraryCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibraryCS();

    UFUNCTION(BlueprintCallable)
    static void BGUGMDead(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void GM_AddAttr(AActor* Unit, EBGUAttrFloat AttrType, float AddValue);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAddBuff(AActor* Caster, AActor* Target, int32 BuffID, BuffSourceType BuffSourceType, float BuffDurationTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTextureRenderTarget2D* GetRTForFX(AActor* OwnerActor, RenderTargetType RTType);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDBCTest(AActor* Owner, const FString& DBCPath);
    
    UFUNCTION(BlueprintCallable)
    static void TestVector(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUHasBuff(AActor* Unit, EBPBuffID BuffID);
    
    UFUNCTION(BlueprintCallable)
    static void UnitSuicide(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetResID(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void DicSortTest(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeEquip(APawn* Actor, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCostAttr(AActor* Unit, AttrCostType AttrCostType, float CostBase, float CostRatio);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static int32 PlayUISound(UObject* InWorldContext, UAkAudioEvent* InAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BGUTestEnum(AActor* Unit, EBGUSimpleState SimpleState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CanShutdown(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCameraFOV(ACameraActor* CameraActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* BGUGetTarget(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraFOV(ACameraActor* CameraActor, float NewFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttrValue(AActor* Unit, EBGUAttrFloat AttrID);
    
    UFUNCTION(BlueprintCallable)
    static void BGUShowFPSUI(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void RunGMCommand(AActor* Actor, const FString& Cmd, bool JustRunInBin);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetAllEquipId();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshGameDB();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StopFetchTick(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUIsUnitDead(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGURemoveBuff(AActor* Unit, int32 BuffID, BuffEffectTriggerType EffectTriggerType, int32 Layer);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUSpawnActor(UWorld* _World, TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerEffect(AActor* Unit, int32 EffectID);
    
    UFUNCTION(BlueprintCallable)
    static void SeqChangeEquip(ABGUPerformerActor* SeqActor, int32 EquipID);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsEnemyTeam(AActor* SelfUnit, AActor* OtherUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUHasBuffByID(AActor* Unit, int32 BuffID);
    
    UFUNCTION(BlueprintCallable)
    static void PlayPigsyStory(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void RunEQSForDebug(AActor* Querier, UEnvQuery* Env);
    
    UFUNCTION(BlueprintCallable)
    static void TestInputEvent(FKeyEvent A);
    
    UFUNCTION(BlueprintCallable)
    static void SetPhysSetting(AActor* Actor, PhysAnimType Type);
    
    UFUNCTION(BlueprintCallable)
    static void BGUClearWeapon(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BreakCloudMove(AActor* Unit, int32 BreakAnimId);
    
    UFUNCTION(BlueprintCallable)
    static void BGUHideLevelUI(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCheatGMLevel();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugGMLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUHasUnitState(AActor* Unit, EBGUUnitState UnitState);
    
    UFUNCTION(BlueprintCallable)
    static void SeqChangeEquip2(ABGUPerformerActor* SeqActor);
    
    UFUNCTION(BlueprintCallable)
    static void GlobalEventTest(AActor* Unit, int32 Times);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateGrayBox(AActor* TempleteActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BGUGetFloatAttr(AActor* Unit, EBGUAttrFloat AttrID);
    
    UFUNCTION(BlueprintCallable)
    static void SummonEventTest(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void SetSolverCenter(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetWeaponNum(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetAttrValue(AActor* Unit, EBGUAttrFloat AttrID, float TargetValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUTryCastSpell(AActor* Unit, int32 SkillID, CastSkillSourceType SourceType, bool IsUseComboingSection);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleCloudMove(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetImmobility(AActor* Unit, float Timer);
    
    UFUNCTION(BlueprintCallable)
    static void BGUStartSceneQTE(AActor* Unit, int32 QTEID, AActor* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void BGURemoveAllBuff(AActor* Unit, BuffEffectTriggerType EffectTriggerType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUEDebugGMLevel();
    
    UFUNCTION(BlueprintCallable)
    static void ResetPhysSetting(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void BGUShowDialogueUI(AActor* Unit, const FString& DialogContent, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool SetTrainDummyInfo(UObject* WorldContext, const FString& TrainDummyClassPath, int32 PlayerRoleDataConfigID, const FString& TrainDummyConfigPath, const FString& CqgPath, float DPSCalTime);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnitEquipFaBao(AActor* Unit, int32 FaBaoID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SwitchCameraGroup(UObject* WorldContext, int32 CameraGroupId);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlayLockTarget(AActor* Owner, ABGUCharacterCS* TargetChr);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAISetSpeedRate(AActor* Unit, float SpeedRate);
    
    UFUNCTION(BlueprintCallable)
    static void TimeLineNoiseTest(float TotalTime, int32 TimePointNum, float NoiseInterregional, UCurveFloat* CurveFloat, ERichCurveInterpMode InterpMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUFullTransEnergy(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void InteruptPigsyStory(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void PlayFacialAnimTest(bool bPlay, AActor* Unit, UAnimSequence* FacialAnim, float TimeOffset, float AutoBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void KJLSpawnProjectile(AActor* BulletSpawner, AActor* Target, const FString& PointGeneratorTag, int32 BulletID, float LimitDistance_ToPlayer, UNiagaraSystem* LightningBeam, const FString& LightningEndParamName, TArray<FString> SocketList, int32 DummyBulletNum, FVector EndPos_Noise, UNiagaraComponent* DummyNiagara, float DummyActiveDistance, FVector2D RandomInterval);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetBehaviorTree(AActor* Unit, UBehaviorTree* BT);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSpawnGhostActor(AActor* Target, const FString& DAPath);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchLanguageEnZh();
    
    UFUNCTION(BlueprintCallable)
    static void BGUToggleGlobalURO(UObject* UObj, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void BGURemoveImmobility(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUTriggerUnitState(AActor* Actor, EBUStateTrigger StateTrigger, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void DisablePhysicalMove(AActor* Unit, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnitUnequipFaBao(AActor* Unit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float FindTraceStatResult(UObject* WorldContext, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUGetWeaponByIndex(AActor* Owner, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetSecondFogData(UExponentialHeightFogComponent* ehfcomp, FExponentialHeightFogData SecondFogData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SkipCurrentSequence(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 ClearPhysAnimSetting(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlatformPatroMove(AActor* Unit, FVector BeginPos, FVector EndPos, float Speed);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlatformPatroRota(AActor* Unit, int32 MaxRate, float Speed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void ExitWeakPerformState(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> BGUGetCachedPointSet(AActor* OwnerCharacter, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAllProjectile(AActor* Unit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void SwitchFreeCameraMode(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 TriggerSwitchPhysics(AActor* Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BGUGetActiveGameMode();
    
    UFUNCTION(BlueprintCallable)
    static FString GetProjectBranchName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void SetTamerStrategyArea(UObject* InWorldContext, TamerStrategyArea InArea);
    
    UFUNCTION(BlueprintCallable)
    static void HandleAiConversation(AActor* Caster, int32 ConversationContentID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void EnterWeakPerformState(UObject* InWorldContext, int32 ConfigID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ExitPlayerSkillCamera(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUHasUnitSimpleState(AActor* Unit, EBGUSimpleState SimpleState);
    
    UFUNCTION(BlueprintCallable)
    static float CheckCurCeilingHeight(ACharacter* Character, float LineTraceLength);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerEffectToTarget(AActor* Unit, int32 EffectID, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnitCastFaBaoSkill(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetUnitSimpleState(AActor* Unit, EBGUSimpleState SimpleState, bool IsRemove);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetSkillSuperArmor(AActor* Unit, UAnimMontage* BreakSkillSupperArmorAM, float SkillSuperArmorValue);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCallPointsRegister(AActor* OwnerCharacter, int32 RequestID, PointsGenType GenType, FPointsGenExtParam ExtParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BGUGetCurrentUserType();
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* TryGetComponentByFName(AActor* Actor, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void BGUHandleAbnormalState(AActor* Attacker, AActor* Victim, FAbnormalStateAccConfig Config, float AddValue);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetUnitCritRateBase(AActor* Unit, float CritRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void EnterPlayerSkillCamera(UObject* WorldContext, int32 CameraID);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraFocusDistance(ACameraActor* CameraActor, float NewFocusDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCameraFocusDistance(ACameraActor* CameraActor);
    
    UFUNCTION(BlueprintCallable)
    static void ExitMonsterSkillCamera(AActor* Monster);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetUnitLockTargetActor(AActor* Unit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUSetCanTriggerGroupAI(UObject* WorldContext, bool CanTrigger);
    
    UFUNCTION(BlueprintCallable)
    static void EnterMonsterSkillCamera(AActor* Monster, int32 CameraID);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUSpawnActorNoBeginPlay(UWorld* _World, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void PrepareForSkillRecording(UWorld* World, TSubclassOf<ABGUCharacterCS> UnitClass, int32 ResID, int32 SkillID, bool bNeedsSpawnNewUnit, UPARAM(Ref) ABGUCharacterCS*& SpawnedUnit, UAnimMontage*& PlayedMontage);
    
    UFUNCTION(BlueprintCallable)
    static void BGURemoveSkillSuperArmor(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void ClampAndAlignToLandScape(AActor* Unit, bool ClampToLand, bool AlignToLand, float DeltaTime, float InterpSpd);
    
    UFUNCTION(BlueprintCallable)
    static void BGURemoveBuffImmediately(AActor* Unit, int32 BuffID, BuffEffectTriggerType EffectTriggerType);
    
    UFUNCTION(BlueprintCallable)
    static void BGUOneHitBreakImmobility(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void CastMagicallyChangeSkill(AActor* Unit, UBGWDataAsset_MagicallyChangeConfig* Config, int32 SkillID, int32 RecoverSkillID);
    
    UFUNCTION(BlueprintCallable)
    static bool CanActivateConsoleCommad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCineCameraFocalLength(ACineCameraActor* CineCameraActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetCineCameraFocalLength(ACineCameraActor* CineCameraActor, float NewFocalLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void TestProfileSimpleOverlap(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlayerCameraLockTarget(AActor* Player, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* BGUClosestPerceivedTarget(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void ExportAllTamerToDataAsset();
    
    UFUNCTION(BlueprintCallable)
    static void BGUTryDestroyDestructible(AActor* DestructibleActor);
    
    UFUNCTION(BlueprintCallable)
    static FRotator BGUCalcCharacterRotOnSlope(ACharacter* OwnerChr, FVector& SurfaceNormal_Normalized);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlatformPatroMoveSingle(AActor* Unit, FVector BeginPos, FVector EndPos, float Speed, int32 PlayerCount, float Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetMultiPointCurrentUnit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUEnablePlayerGuiBeiCamera(UObject* WorldContext, FRotator CurInverseAnimRotation);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateNavMeshBoundsVolumes(AActor* TempleteActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUDisablePlayerGuiBeiCamera(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUSpawnActorAndECSBeginPlay(UWorld* _World, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void ExportBulletSkillToDataAsset(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportTamerListToNewDAByBlame(AActor* Actor, const FString& OldTamer, const FString& NewTimer, const FString& BlameName);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCamShakeWithControlByClass(TSubclassOf<UMatineeCameraShake> CameraShakeCls, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void PauseCamShakeWithControlByActor(AActor* Target, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetDispInteractActorAttachTo(AActor* AttachTo);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUTryCastSpellWithStartSection(AActor* Unit, int32 SkillID, FName MontageStartSectionName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetPlayerInSequenceTransition(AActor* Owner, bool bValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool BGUCheckSpecialConsumeItemUseAble(UObject* WorldContext, int32 ItemId, bool bShowTips);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetGuibeiBoneTransformFromLastTick(UAnimSequence* AnimSeq, float CurTime, float LastTime, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportTamerListToNewDAByWeaponInfo(AActor* Actor, const FString& OldTamer, const FString& NewTimer, const FString& BlameName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RotateLevelRelativeToParentTransform(UObject* WorldContextObject, FName LevelName, FTransform ParentTransform, FTransform ParentTransformOffset);
    
    UFUNCTION(BlueprintCallable)
    static FTransform CalTransformRelativeToParentTransformOffset(FTransform SelfTransform, FTransform ParentTransform, FTransform ParentTransformOffset);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectWorldLocationToWidgetPositionWithSZInS(APlayerController* PlayerController, FVector WorldPos, FVector2D& ScreenPos);
    
};

