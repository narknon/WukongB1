#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MoveAMPath.h"
#include "Templates/SubclassOf.h"
#include "BGUFuncLibResCS.generated.h"

class ABGWLevelStreamingStateVolume;
class UAnimMontage;
class UBANS_GSBase;
class UBGWDataAsset_UnitBeAttackedConfig;
class UBGWDataAsset_UnitDeathDispConfig;
class UObject;
class UPackage;

UCLASS(Blueprintable)
class UBGUFuncLibResCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibResCS();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUCopyAndRenameBHAM(UObject* WorldContext, bool IsB1, int32 BeginResID, int32 EndResID, TArray<FString>& NeedDeleteBHCatalogList, TArray<FMoveAMPath>& Result);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCopyAndRenameDEADAM(int32 BeginResID, int32 EndResID, TArray<FString>& NeedDeleteDeadAMCatalogList, TArray<FMoveAMPath>& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckoutAndSavePackage(TArray<UObject*> Objects, TArray<UPackage*>& FailedPackages, bool bCheckDirty, bool bPromptToSave, bool bAlreadyCheckedOut, bool bCanBeDeclined);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAddNotifyStateToMontage(UAnimMontage* InMontage, FName TrackName, float StartPos, float Duration, TSubclassOf<UBANS_GSBase> NotifyClass, bool bRemoveOldTrack);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetUnitNameForUDDConfig(UBGWDataAsset_UnitDeathDispConfig* UDDConfig, const FString& NormalDeadAMPath, const FString& UnitResName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetUnitNameForUBAConfig(UBGWDataAsset_UnitBeAttackedConfig* UBAConfig, const FString& NormalStiffAMPath, const FString& UnitResName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BGUGetNewSweepCheckGroupIdInAM(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAddBlendPhysicToDeathMontage(UAnimMontage* InMontage, float Thresholds, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCopyInfoFromUnitComm2UnitDead();
    
    UFUNCTION(BlueprintCallable)
    static void BGUAddLifeSavingHairWindowToDeathMontage(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelAllLevelStreamingDataAssetConfigByCPG(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelStreamingStateVolumeControlledLevelInfo(ABGWLevelStreamingStateVolume* Volume);
    
};

