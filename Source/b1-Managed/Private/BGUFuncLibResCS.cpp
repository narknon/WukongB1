#include "BGUFuncLibResCS.h"
#include "Templates/SubclassOf.h"

UBGUFuncLibResCS::UBGUFuncLibResCS() {
}

void UBGUFuncLibResCS::BGUCopyAndRenameBHAM(UObject* WorldContext, bool IsB1, int32 BeginResID, int32 EndResID, TArray<FString>& NeedDeleteBHCatalogList, TArray<FMoveAMPath>& Result) {
}

void UBGUFuncLibResCS::BGUCopyAndRenameDEADAM(int32 BeginResID, int32 EndResID, TArray<FString>& NeedDeleteDeadAMCatalogList, TArray<FMoveAMPath>& Result) {
}

bool UBGUFuncLibResCS::CheckoutAndSavePackage(TArray<UObject*> Objects, TArray<UPackage*>& FailedPackages, bool bCheckDirty, bool bPromptToSave, bool bAlreadyCheckedOut, bool bCanBeDeclined) {
    return false;
}

void UBGUFuncLibResCS::BGUAddNotifyStateToMontage(UAnimMontage* InMontage, FName TrackName, float StartPos, float Duration, TSubclassOf<UBANS_GSBase> NotifyClass, bool bRemoveOldTrack) {
}

void UBGUFuncLibResCS::BGUSetUnitNameForUDDConfig(UBGWDataAsset_UnitDeathDispConfig* UDDConfig, const FString& NormalDeadAMPath, const FString& UnitResName) {
}

void UBGUFuncLibResCS::BGUSetUnitNameForUBAConfig(UBGWDataAsset_UnitBeAttackedConfig* UBAConfig, const FString& NormalStiffAMPath, const FString& UnitResName) {
}

int32 UBGUFuncLibResCS::BGUGetNewSweepCheckGroupIdInAM(UAnimMontage* InMontage) {
    return 0;
}

void UBGUFuncLibResCS::BGUAddBlendPhysicToDeathMontage(UAnimMontage* InMontage, float Thresholds, FName BoneName) {
}

void UBGUFuncLibResCS::BGUCopyInfoFromUnitComm2UnitDead() {
}

void UBGUFuncLibResCS::BGUAddLifeSavingHairWindowToDeathMontage(UAnimMontage* InMontage) {
}

FString UBGUFuncLibResCS::GetLevelAllLevelStreamingDataAssetConfigByCPG(const FString& LevelName) {
    return TEXT("");
}

FString UBGUFuncLibResCS::GetLevelStreamingStateVolumeControlledLevelInfo(ABGWLevelStreamingStateVolume* Volume) {
    return TEXT("");
}


