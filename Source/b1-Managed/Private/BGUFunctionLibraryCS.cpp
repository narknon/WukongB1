#include "BGUFunctionLibraryCS.h"
#include "Templates/SubclassOf.h"

UBGUFunctionLibraryCS::UBGUFunctionLibraryCS() {
}

void UBGUFunctionLibraryCS::BGUGMDead(AActor* Unit) {
}

void UBGUFunctionLibraryCS::GM_AddAttr(AActor* Unit, EBGUAttrFloat AttrType, float AddValue) {
}

void UBGUFunctionLibraryCS::BGUAddBuff(AActor* Caster, AActor* Target, int32 BuffID, BuffSourceType BuffSourceType, float BuffDurationTimer) {
}

UTextureRenderTarget2D* UBGUFunctionLibraryCS::GetRTForFX(AActor* OwnerActor, RenderTargetType RTType) {
    return NULL;
}

void UBGUFunctionLibraryCS::BGUDBCTest(AActor* Owner, const FString& DBCPath) {
}

void UBGUFunctionLibraryCS::TestVector(FVector A) {
}

bool UBGUFunctionLibraryCS::BGUHasBuff(AActor* Unit, EBPBuffID BuffID) {
    return false;
}

void UBGUFunctionLibraryCS::UnitSuicide(AActor* Unit) {
}

int32 UBGUFunctionLibraryCS::BGUGetResID(AActor* Unit) {
    return 0;
}

void UBGUFunctionLibraryCS::DicSortTest(AActor* Unit) {
}

void UBGUFunctionLibraryCS::ChangeEquip(APawn* Actor, int32 ID) {
}

void UBGUFunctionLibraryCS::BGUCostAttr(AActor* Unit, AttrCostType AttrCostType, float CostBase, float CostRatio) {
}

int32 UBGUFunctionLibraryCS::PlayUISound(UObject* InWorldContext, UAkAudioEvent* InAudioEvent) {
    return 0;
}

void UBGUFunctionLibraryCS::BGUTestEnum(AActor* Unit, EBGUSimpleState SimpleState) {
}

bool UBGUFunctionLibraryCS::CanShutdown(UObject* WorldContext) {
    return false;
}

float UBGUFunctionLibraryCS::GetCameraFOV(ACameraActor* CameraActor) {
    return 0.0f;
}

AActor* UBGUFunctionLibraryCS::BGUGetTarget(AActor* Unit) {
    return NULL;
}

void UBGUFunctionLibraryCS::SetCameraFOV(ACameraActor* CameraActor, float NewFOV) {
}

float UBGUFunctionLibraryCS::GetAttrValue(AActor* Unit, EBGUAttrFloat AttrID) {
    return 0.0f;
}

void UBGUFunctionLibraryCS::BGUShowFPSUI(AActor* Unit) {
}

void UBGUFunctionLibraryCS::RunGMCommand(AActor* Actor, const FString& Cmd, bool JustRunInBin) {
}

TArray<int32> UBGUFunctionLibraryCS::GetAllEquipId() {
    return TArray<int32>();
}

void UBGUFunctionLibraryCS::RefreshGameDB() {
}

void UBGUFunctionLibraryCS::StopFetchTick(UObject* WorldContext) {
}

bool UBGUFunctionLibraryCS::BGUIsUnitDead(AActor* Unit) {
    return false;
}

void UBGUFunctionLibraryCS::BGURemoveBuff(AActor* Unit, int32 BuffID, BuffEffectTriggerType EffectTriggerType, int32 Layer) {
}

AActor* UBGUFunctionLibraryCS::BGUSpawnActor(UWorld* _World, TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation) {
    return NULL;
}

void UBGUFunctionLibraryCS::TriggerEffect(AActor* Unit, int32 EffectID) {
}

void UBGUFunctionLibraryCS::SeqChangeEquip(ABGUPerformerActor* SeqActor, int32 EquipID) {
}

bool UBGUFunctionLibraryCS::BGUIsEnemyTeam(AActor* SelfUnit, AActor* OtherUnit) {
    return false;
}

bool UBGUFunctionLibraryCS::BGUHasBuffByID(AActor* Unit, int32 BuffID) {
    return false;
}

void UBGUFunctionLibraryCS::PlayPigsyStory(AActor* Unit) {
}

void UBGUFunctionLibraryCS::RunEQSForDebug(AActor* Querier, UEnvQuery* Env) {
}

void UBGUFunctionLibraryCS::TestInputEvent(FKeyEvent A) {
}

void UBGUFunctionLibraryCS::SetPhysSetting(AActor* Actor, PhysAnimType Type) {
}

void UBGUFunctionLibraryCS::BGUClearWeapon(AActor* Owner) {
}

void UBGUFunctionLibraryCS::BreakCloudMove(AActor* Unit, int32 BreakAnimId) {
}

void UBGUFunctionLibraryCS::BGUHideLevelUI(AActor* Unit) {
}

bool UBGUFunctionLibraryCS::IsCheatGMLevel() {
    return false;
}

bool UBGUFunctionLibraryCS::IsDebugGMLevel() {
    return false;
}

bool UBGUFunctionLibraryCS::BGUHasUnitState(AActor* Unit, EBGUUnitState UnitState) {
    return false;
}

void UBGUFunctionLibraryCS::SeqChangeEquip2(ABGUPerformerActor* SeqActor) {
}

void UBGUFunctionLibraryCS::GlobalEventTest(AActor* Unit, int32 Times) {
}

void UBGUFunctionLibraryCS::GenerateGrayBox(AActor* TempleteActor) {
}

float UBGUFunctionLibraryCS::BGUGetFloatAttr(AActor* Unit, EBGUAttrFloat AttrID) {
    return 0.0f;
}

void UBGUFunctionLibraryCS::SummonEventTest(AActor* Unit) {
}

void UBGUFunctionLibraryCS::SetSolverCenter(AActor* Unit) {
}

int32 UBGUFunctionLibraryCS::BGUGetWeaponNum(AActor* Unit) {
    return 0;
}

void UBGUFunctionLibraryCS::BGUSetAttrValue(AActor* Unit, EBGUAttrFloat AttrID, float TargetValue) {
}

int32 UBGUFunctionLibraryCS::BGUTryCastSpell(AActor* Unit, int32 SkillID, CastSkillSourceType SourceType, bool IsUseComboingSection) {
    return 0;
}

void UBGUFunctionLibraryCS::ToggleCloudMove(AActor* Unit) {
}

void UBGUFunctionLibraryCS::BGUSetImmobility(AActor* Unit, float Timer) {
}

void UBGUFunctionLibraryCS::BGUStartSceneQTE(AActor* Unit, int32 QTEID, AActor* TargetCharacter) {
}

void UBGUFunctionLibraryCS::BGURemoveAllBuff(AActor* Unit, BuffEffectTriggerType EffectTriggerType) {
}

bool UBGUFunctionLibraryCS::IsUEDebugGMLevel() {
    return false;
}

void UBGUFunctionLibraryCS::ResetPhysSetting(AActor* Actor) {
}

void UBGUFunctionLibraryCS::BGUShowDialogueUI(AActor* Unit, const FString& DialogContent, float Duration) {
}

bool UBGUFunctionLibraryCS::SetTrainDummyInfo(UObject* WorldContext, const FString& TrainDummyClassPath, int32 PlayerRoleDataConfigID, const FString& TrainDummyConfigPath, const FString& CqgPath, float DPSCalTime) {
    return false;
}

void UBGUFunctionLibraryCS::BGUUnitEquipFaBao(AActor* Unit, int32 FaBaoID) {
}

void UBGUFunctionLibraryCS::SwitchCameraGroup(UObject* WorldContext, int32 CameraGroupId) {
}

void UBGUFunctionLibraryCS::BGUPlayLockTarget(AActor* Owner, ABGUCharacterCS* TargetChr) {
}

void UBGUFunctionLibraryCS::BGUAISetSpeedRate(AActor* Unit, float SpeedRate) {
}

void UBGUFunctionLibraryCS::TimeLineNoiseTest(float TotalTime, int32 TimePointNum, float NoiseInterregional, UCurveFloat* CurveFloat, ERichCurveInterpMode InterpMode) {
}

void UBGUFunctionLibraryCS::BGUFullTransEnergy(UObject* WorldContext) {
}

void UBGUFunctionLibraryCS::InteruptPigsyStory(AActor* Unit) {
}

void UBGUFunctionLibraryCS::PlayFacialAnimTest(bool bPlay, AActor* Unit, UAnimSequence* FacialAnim, float TimeOffset, float AutoBlendOutTime) {
}

void UBGUFunctionLibraryCS::KJLSpawnProjectile(AActor* BulletSpawner, AActor* Target, const FString& PointGeneratorTag, int32 BulletID, float LimitDistance_ToPlayer, UNiagaraSystem* LightningBeam, const FString& LightningEndParamName, TArray<FString> SocketList, int32 DummyBulletNum, FVector EndPos_Noise, UNiagaraComponent* DummyNiagara, float DummyActiveDistance, FVector2D RandomInterval) {
}

void UBGUFunctionLibraryCS::BGUSetBehaviorTree(AActor* Unit, UBehaviorTree* BT) {
}

void UBGUFunctionLibraryCS::BGUSpawnGhostActor(AActor* Target, const FString& DAPath) {
}

void UBGUFunctionLibraryCS::SwitchLanguageEnZh() {
}

void UBGUFunctionLibraryCS::BGUToggleGlobalURO(UObject* UObj, bool bEnable) {
}

void UBGUFunctionLibraryCS::BGURemoveImmobility(AActor* Unit) {
}

void UBGUFunctionLibraryCS::BGUTriggerUnitState(AActor* Actor, EBUStateTrigger StateTrigger, float Time) {
}

void UBGUFunctionLibraryCS::DisablePhysicalMove(AActor* Unit, bool bDisable) {
}

void UBGUFunctionLibraryCS::BGUUnitUnequipFaBao(AActor* Unit) {
}

float UBGUFunctionLibraryCS::FindTraceStatResult(UObject* WorldContext, const FString& Name) {
    return 0.0f;
}

AActor* UBGUFunctionLibraryCS::BGUGetWeaponByIndex(AActor* Owner, int32 Index) {
    return NULL;
}

void UBGUFunctionLibraryCS::BGUSetSecondFogData(UExponentialHeightFogComponent* ehfcomp, FExponentialHeightFogData SecondFogData) {
}

void UBGUFunctionLibraryCS::SkipCurrentSequence(UObject* WorldContext) {
}

int32 UBGUFunctionLibraryCS::ClearPhysAnimSetting(AActor* Unit) {
    return 0;
}

void UBGUFunctionLibraryCS::BGUPlatformPatroMove(AActor* Unit, FVector BeginPos, FVector EndPos, float Speed) {
}

void UBGUFunctionLibraryCS::BGUPlatformPatroRota(AActor* Unit, int32 MaxRate, float Speed) {
}

void UBGUFunctionLibraryCS::ExitWeakPerformState(UObject* InWorldContext) {
}

TArray<FVector> UBGUFunctionLibraryCS::BGUGetCachedPointSet(AActor* OwnerCharacter, int32 RequestID) {
    return TArray<FVector>();
}

void UBGUFunctionLibraryCS::DestroyAllProjectile(AActor* Unit) {
}

void UBGUFunctionLibraryCS::SwitchFreeCameraMode(UObject* InWorldContext) {
}

int32 UBGUFunctionLibraryCS::TriggerSwitchPhysics(AActor* Unit) {
    return 0;
}

int32 UBGUFunctionLibraryCS::BGUGetActiveGameMode() {
    return 0;
}

FString UBGUFunctionLibraryCS::GetProjectBranchName() {
    return TEXT("");
}

void UBGUFunctionLibraryCS::SetTamerStrategyArea(UObject* InWorldContext, TamerStrategyArea InArea) {
}

void UBGUFunctionLibraryCS::HandleAiConversation(AActor* Caster, int32 ConversationContentID) {
}

void UBGUFunctionLibraryCS::EnterWeakPerformState(UObject* InWorldContext, int32 ConfigID) {
}

void UBGUFunctionLibraryCS::ExitPlayerSkillCamera(UObject* WorldContext) {
}

bool UBGUFunctionLibraryCS::BGUHasUnitSimpleState(AActor* Unit, EBGUSimpleState SimpleState) {
    return false;
}

float UBGUFunctionLibraryCS::CheckCurCeilingHeight(ACharacter* Character, float LineTraceLength) {
    return 0.0f;
}

void UBGUFunctionLibraryCS::TriggerEffectToTarget(AActor* Unit, int32 EffectID, AActor* Target) {
}

void UBGUFunctionLibraryCS::BGUUnitCastFaBaoSkill(AActor* Unit) {
}

void UBGUFunctionLibraryCS::BGUSetUnitSimpleState(AActor* Unit, EBGUSimpleState SimpleState, bool IsRemove) {
}

void UBGUFunctionLibraryCS::BGUSetSkillSuperArmor(AActor* Unit, UAnimMontage* BreakSkillSupperArmorAM, float SkillSuperArmorValue) {
}

void UBGUFunctionLibraryCS::BGUCallPointsRegister(AActor* OwnerCharacter, int32 RequestID, PointsGenType GenType, FPointsGenExtParam ExtParam) {
}

int32 UBGUFunctionLibraryCS::BGUGetCurrentUserType() {
    return 0;
}

UActorComponent* UBGUFunctionLibraryCS::TryGetComponentByFName(AActor* Actor, FName Name) {
    return NULL;
}

void UBGUFunctionLibraryCS::BGUHandleAbnormalState(AActor* Attacker, AActor* Victim, FAbnormalStateAccConfig Config, float AddValue) {
}

void UBGUFunctionLibraryCS::BGUSetUnitCritRateBase(AActor* Unit, float CritRate) {
}

void UBGUFunctionLibraryCS::EnterPlayerSkillCamera(UObject* WorldContext, int32 CameraID) {
}

void UBGUFunctionLibraryCS::SetCameraFocusDistance(ACameraActor* CameraActor, float NewFocusDistance) {
}

float UBGUFunctionLibraryCS::GetCameraFocusDistance(ACameraActor* CameraActor) {
    return 0.0f;
}

void UBGUFunctionLibraryCS::ExitMonsterSkillCamera(AActor* Monster) {
}

AActor* UBGUFunctionLibraryCS::GetUnitLockTargetActor(AActor* Unit) {
    return NULL;
}

void UBGUFunctionLibraryCS::BGUSetCanTriggerGroupAI(UObject* WorldContext, bool CanTrigger) {
}

void UBGUFunctionLibraryCS::EnterMonsterSkillCamera(AActor* Monster, int32 CameraID) {
}

AActor* UBGUFunctionLibraryCS::BGUSpawnActorNoBeginPlay(UWorld* _World, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UBGUFunctionLibraryCS::PrepareForSkillRecording(UWorld* World, TSubclassOf<ABGUCharacterCS> UnitClass, int32 ResID, int32 SkillID, bool bNeedsSpawnNewUnit, ABGUCharacterCS*& SpawnedUnit, UAnimMontage*& PlayedMontage) {
}

void UBGUFunctionLibraryCS::BGURemoveSkillSuperArmor(AActor* Unit) {
}

void UBGUFunctionLibraryCS::ClampAndAlignToLandScape(AActor* Unit, bool ClampToLand, bool AlignToLand, float DeltaTime, float InterpSpd) {
}

void UBGUFunctionLibraryCS::BGURemoveBuffImmediately(AActor* Unit, int32 BuffID, BuffEffectTriggerType EffectTriggerType) {
}

void UBGUFunctionLibraryCS::BGUOneHitBreakImmobility(AActor* Unit) {
}

void UBGUFunctionLibraryCS::CastMagicallyChangeSkill(AActor* Unit, UBGWDataAsset_MagicallyChangeConfig* Config, int32 SkillID, int32 RecoverSkillID) {
}

bool UBGUFunctionLibraryCS::CanActivateConsoleCommad() {
    return false;
}

float UBGUFunctionLibraryCS::GetCineCameraFocalLength(ACineCameraActor* CineCameraActor) {
    return 0.0f;
}

void UBGUFunctionLibraryCS::SetCineCameraFocalLength(ACineCameraActor* CineCameraActor, float NewFocalLength) {
}

void UBGUFunctionLibraryCS::TestProfileSimpleOverlap(UObject* WorldContext) {
}

void UBGUFunctionLibraryCS::BGUPlayerCameraLockTarget(AActor* Player, AActor* Target) {
}

AActor* UBGUFunctionLibraryCS::BGUClosestPerceivedTarget(AActor* Unit) {
    return NULL;
}

void UBGUFunctionLibraryCS::ExportAllTamerToDataAsset() {
}

void UBGUFunctionLibraryCS::BGUTryDestroyDestructible(AActor* DestructibleActor) {
}

FRotator UBGUFunctionLibraryCS::BGUCalcCharacterRotOnSlope(ACharacter* OwnerChr, FVector& SurfaceNormal_Normalized) {
    return FRotator{};
}

void UBGUFunctionLibraryCS::BGUPlatformPatroMoveSingle(AActor* Unit, FVector BeginPos, FVector EndPos, float Speed, int32 PlayerCount, float Range) {
}

int32 UBGUFunctionLibraryCS::BGUGetMultiPointCurrentUnit(AActor* Actor) {
    return 0;
}

void UBGUFunctionLibraryCS::BGUEnablePlayerGuiBeiCamera(UObject* WorldContext, FRotator CurInverseAnimRotation) {
}

void UBGUFunctionLibraryCS::GenerateNavMeshBoundsVolumes(AActor* TempleteActor) {
}

void UBGUFunctionLibraryCS::BGUDisablePlayerGuiBeiCamera(UObject* WorldContext) {
}

AActor* UBGUFunctionLibraryCS::BGUSpawnActorAndECSBeginPlay(UWorld* _World, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UBGUFunctionLibraryCS::ExportBulletSkillToDataAsset(ABUTamerActor* TM) {
}

bool UBGUFunctionLibraryCS::ExportTamerListToNewDAByBlame(AActor* Actor, const FString& OldTamer, const FString& NewTimer, const FString& BlameName) {
    return false;
}

void UBGUFunctionLibraryCS::PlayCamShakeWithControlByClass(TSubclassOf<UMatineeCameraShake> CameraShakeCls, AActor* Target) {
}

void UBGUFunctionLibraryCS::PauseCamShakeWithControlByActor(AActor* Target, bool bPause) {
}

void UBGUFunctionLibraryCS::BGUSetDispInteractActorAttachTo(AActor* AttachTo) {
}

int32 UBGUFunctionLibraryCS::BGUTryCastSpellWithStartSection(AActor* Unit, int32 SkillID, FName MontageStartSectionName) {
    return 0;
}

void UBGUFunctionLibraryCS::BGUSetPlayerInSequenceTransition(AActor* Owner, bool bValue) {
}

bool UBGUFunctionLibraryCS::BGUCheckSpecialConsumeItemUseAble(UObject* WorldContext, int32 ItemId, bool bShowTips) {
    return false;
}

FTransform UBGUFunctionLibraryCS::GetGuibeiBoneTransformFromLastTick(UAnimSequence* AnimSeq, float CurTime, float LastTime, FName BoneName) {
    return FTransform{};
}

bool UBGUFunctionLibraryCS::ExportTamerListToNewDAByWeaponInfo(AActor* Actor, const FString& OldTamer, const FString& NewTimer, const FString& BlameName) {
    return false;
}

void UBGUFunctionLibraryCS::RotateLevelRelativeToParentTransform(UObject* WorldContextObject, FName LevelName, FTransform ParentTransform, FTransform ParentTransformOffset) {
}

FTransform UBGUFunctionLibraryCS::CalTransformRelativeToParentTransformOffset(FTransform SelfTransform, FTransform ParentTransform, FTransform ParentTransformOffset) {
    return FTransform{};
}

void UBGUFunctionLibraryCS::ProjectWorldLocationToWidgetPositionWithSZInS(APlayerController* PlayerController, FVector WorldPos, FVector2D& ScreenPos) {
}


