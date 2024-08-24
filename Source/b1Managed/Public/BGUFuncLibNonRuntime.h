#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "BGUFuncLibNonRuntime.generated.h"

class AActor;
class ABGUCharacterCS;
class ABUTamerActor;
class UActorComponent;
class UAnimMontage;
class UAnimNotifyState;
class UAnimSequence;
class UAssetDataArray;
class UBGWDataAsset_AbpHumanoidSetting;
class UBGWDataAsset_ProjectileSpawnConfig;
class UBGWDataAsset_UnitBeAttackedConfig;
class UBGWDataAsset_UnitDeathDispConfig;
class UObject;
class UShapeComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UBGUFuncLibNonRuntime : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibNonRuntime();

    UFUNCTION(BlueprintCallable)
    static UObject* GetCDO(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static FString TestCode();
    
    UFUNCTION(BlueprintCallable)
    static bool SkillSVaild(AActor* Unit, int32 SkillID);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsFileExist(const FString& PathWithGameHead, FString& FullPath);
    
    UFUNCTION(BlueprintCallable)
    static void CheckBuffRemove();
    
    UFUNCTION(BlueprintCallable)
    static void ScanCBGTemplate();
    
    UFUNCTION(BlueprintCallable)
    static void BGUCopyABPSetting(UBGWDataAsset_AbpHumanoidSetting* Src, UBGWDataAsset_AbpHumanoidSetting* Dest);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UShapeComponent*> GetResIDFromAsset(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectileSpawnTest(AActor* Spawnner, AActor* Target, UBGWDataAsset_ProjectileSpawnConfig* ProjectileSpawnConfig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FString CheckHitMoveCapsules(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResIDFromUnitAsset(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static void BindDeathDispAMInUDDC(UBGWDataAsset_UnitDeathDispConfig* UDDC);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllProjectileBPPath(TArray<FString>& PathList_Exist);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCompEditorOnly(UActorComponent* ActorComp, bool bIsEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static void BindNormalStiffAMInUBAC(UBGWDataAsset_UnitBeAttackedConfig* UBAC);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAutoAddFootLockCurve(UAnimSequence* AnimSequence, UPARAM(Ref) FName& LeftFootBoneName, UPARAM(Ref) FName& RightFootBoneName, float FootLockHeight, float FootUnlockHeight, float FootLockSpeed, float FootUnlockSpeed);
    
    UFUNCTION(BlueprintCallable)
    static FString GetOriFilePathByAssetPath(const FString& AssetPathName, const FString& AssetName);
    
    UFUNCTION(BlueprintCallable)
    static int32 UpdateHitAudioPreloadList(TArray<FString>& PathList_Exist);
    
    UFUNCTION(BlueprintCallable)
    static FString CheckBeAttacked2Resources(bool bCheckBasicRuleOnly);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSummonBPPathFromDesc(TArray<FString>& CurrentUsedBPPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FString CheckUnitCapsuleCollisions(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void Analysis_BuffUseSimpleState();
    
    UFUNCTION(BlueprintCallable)
    static bool BGUSetUpDefaultFootstepAudio(ABUTamerActor* TamerActor, UPARAM(Ref) FSoftObjectPath& AudioPath);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<ABGUCharacterCS> GetTemplateClassFromUnitAsset(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMigrateDataFromUnitCommDesc(const FString& BlameName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAddNofityStateByPelvisSpeed(UAnimMontage* AnimMontage, float SpeedThreshold, int32 BuffID, TSubclassOf<UAnimNotifyState> NewNotifyStateClass, bool FirstRemoveAddBuffID, const FString& SocketName, float TickTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUEditorRecordSubLevelsInWorld(UObject* WorldContext, const FString& RecordFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void AddMagicallyChangeFadeOutNotify(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static void Analysis_BuffUseSpecialHitPartID();
    
    UFUNCTION(BlueprintCallable)
    static void BGUSerializeActorTransformsToJson(const FString& JsonPath, TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMigrateDataFromSkillEffectDesc(const FString& BlameName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BGUGetLeftFootHeightByFootStepConfig(int32 ResID, USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDeserializeActorTransformsFromJson(const FString& JsonPath, UPARAM(Ref) TArray<AActor*>& ActorsToDeserialize);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUAutoAddFootSyncMarkerToAnimSequence(UAnimSequence* AnimSequence, UPARAM(Ref) FName& LeftFootBoneName, UPARAM(Ref) FName& RightFootBoneName, float GroundFootLimitHeight);
    
    UFUNCTION(BlueprintCallable)
    static void BGUEditorRecordSubLevelsInLevelPackage(const FString& LevelAsset, const FString& RecordFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMigrateDataFromUnitCommDesc_OverrideData(const FString& BlameName);
    
};

