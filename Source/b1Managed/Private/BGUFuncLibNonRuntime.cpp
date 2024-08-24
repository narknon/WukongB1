#include "BGUFuncLibNonRuntime.h"
#include "Templates/SubclassOf.h"

UBGUFuncLibNonRuntime::UBGUFuncLibNonRuntime() {
}

UObject* UBGUFuncLibNonRuntime::GetCDO(UAssetDataArray* Assets) {
    return NULL;
}

FString UBGUFuncLibNonRuntime::TestCode() {
    return TEXT("");
}

bool UBGUFuncLibNonRuntime::SkillSVaild(AActor* Unit, int32 SkillID) {
    return false;
}

bool UBGUFuncLibNonRuntime::BGUIsFileExist(const FString& PathWithGameHead, FString& FullPath) {
    return false;
}

void UBGUFuncLibNonRuntime::CheckBuffRemove() {
}

void UBGUFuncLibNonRuntime::ScanCBGTemplate() {
}

void UBGUFuncLibNonRuntime::BGUCopyABPSetting(UBGWDataAsset_AbpHumanoidSetting* Src, UBGWDataAsset_AbpHumanoidSetting* Dest) {
}

TArray<UShapeComponent*> UBGUFuncLibNonRuntime::GetResIDFromAsset(UAssetDataArray* Assets) {
    return TArray<UShapeComponent*>();
}

void UBGUFuncLibNonRuntime::ProjectileSpawnTest(AActor* Spawnner, AActor* Target, UBGWDataAsset_ProjectileSpawnConfig* ProjectileSpawnConfig) {
}

FString UBGUFuncLibNonRuntime::CheckHitMoveCapsules(UObject* WorldContext) {
    return TEXT("");
}

int32 UBGUFuncLibNonRuntime::GetResIDFromUnitAsset(UAssetDataArray* Assets) {
    return 0;
}

void UBGUFuncLibNonRuntime::BindDeathDispAMInUDDC(UBGWDataAsset_UnitDeathDispConfig* UDDC) {
}

void UBGUFuncLibNonRuntime::GetAllProjectileBPPath(TArray<FString>& PathList_Exist) {
}

void UBGUFuncLibNonRuntime::SetActorCompEditorOnly(UActorComponent* ActorComp, bool bIsEditorOnly) {
}

void UBGUFuncLibNonRuntime::BindNormalStiffAMInUBAC(UBGWDataAsset_UnitBeAttackedConfig* UBAC) {
}

void UBGUFuncLibNonRuntime::BGUAutoAddFootLockCurve(UAnimSequence* AnimSequence, FName& LeftFootBoneName, FName& RightFootBoneName, float FootLockHeight, float FootUnlockHeight, float FootLockSpeed, float FootUnlockSpeed) {
}

FString UBGUFuncLibNonRuntime::GetOriFilePathByAssetPath(const FString& AssetPathName, const FString& AssetName) {
    return TEXT("");
}

int32 UBGUFuncLibNonRuntime::UpdateHitAudioPreloadList(TArray<FString>& PathList_Exist) {
    return 0;
}

FString UBGUFuncLibNonRuntime::CheckBeAttacked2Resources(bool bCheckBasicRuleOnly) {
    return TEXT("");
}

void UBGUFuncLibNonRuntime::GetAllSummonBPPathFromDesc(TArray<FString>& CurrentUsedBPPath) {
}

FString UBGUFuncLibNonRuntime::CheckUnitCapsuleCollisions(UObject* WorldContext) {
    return TEXT("");
}

void UBGUFuncLibNonRuntime::Analysis_BuffUseSimpleState() {
}

bool UBGUFuncLibNonRuntime::BGUSetUpDefaultFootstepAudio(ABUTamerActor* TamerActor, FSoftObjectPath& AudioPath) {
    return false;
}

TSubclassOf<ABGUCharacterCS> UBGUFuncLibNonRuntime::GetTemplateClassFromUnitAsset(UAssetDataArray* Assets) {
    return NULL;
}

void UBGUFuncLibNonRuntime::BGUMigrateDataFromUnitCommDesc(const FString& BlameName) {
}

void UBGUFuncLibNonRuntime::BGUAddNofityStateByPelvisSpeed(UAnimMontage* AnimMontage, float SpeedThreshold, int32 BuffID, TSubclassOf<UAnimNotifyState> NewNotifyStateClass, bool FirstRemoveAddBuffID, const FString& SocketName, float TickTime) {
}

void UBGUFuncLibNonRuntime::BGUEditorRecordSubLevelsInWorld(UObject* WorldContext, const FString& RecordFilePath) {
}

void UBGUFuncLibNonRuntime::AddMagicallyChangeFadeOutNotify(UAnimMontage* Montage) {
}

void UBGUFuncLibNonRuntime::Analysis_BuffUseSpecialHitPartID() {
}

void UBGUFuncLibNonRuntime::BGUSerializeActorTransformsToJson(const FString& JsonPath, TArray<AActor*> Actors) {
}

void UBGUFuncLibNonRuntime::BGUMigrateDataFromSkillEffectDesc(const FString& BlameName) {
}

float UBGUFuncLibNonRuntime::BGUGetLeftFootHeightByFootStepConfig(int32 ResID, USkeletalMeshComponent* Mesh) {
    return 0.0f;
}

void UBGUFuncLibNonRuntime::BGUDeserializeActorTransformsFromJson(const FString& JsonPath, TArray<AActor*>& ActorsToDeserialize) {
}

bool UBGUFuncLibNonRuntime::BGUAutoAddFootSyncMarkerToAnimSequence(UAnimSequence* AnimSequence, FName& LeftFootBoneName, FName& RightFootBoneName, float GroundFootLimitHeight) {
    return false;
}

void UBGUFuncLibNonRuntime::BGUEditorRecordSubLevelsInLevelPackage(const FString& LevelAsset, const FString& RecordFilePath) {
}

void UBGUFuncLibNonRuntime::BGUMigrateDataFromUnitCommDesc_OverrideData(const FString& BlameName) {
}


