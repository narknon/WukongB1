#include "BGUFunctionLibraryManaged.h"
#include "Templates/SubclassOf.h"

UBGUFunctionLibraryManaged::UBGUFunctionLibraryManaged() {
}

void UBGUFunctionLibraryManaged::RunScriptGM(const FString& GMCommand, UObject* WorldContext) {
}

void UBGUFunctionLibraryManaged::BGUSwitchPage(UObject* WorldContext, EUIPageID PageId) {
}

UClass* UBGUFunctionLibraryManaged::FindOrLoadClass(const FString& ClassName) {
    return NULL;
}

void UBGUFunctionLibraryManaged::BGUSetPageActive(UObject* WorldContext, EUIPageID PageId, bool IsActive) {
}

void UBGUFunctionLibraryManaged::BGUSaveTempWidget(UUserWidget* TmpWidget) {
}

void UBGUFunctionLibraryManaged::FindAllNodeByClass(UBED_CalliopeAssetBase* InAsset, TSubclassOf<UBED_CalliopeNodeBae> NodeClass, TArray<UBED_CalliopeNodeBae*>& Nodes) {
}

void UBGUFunctionLibraryManaged::BGUActiveUIBlackOut(UObject* WorldContext, bool IsActive) {
}

void UBGUFunctionLibraryManaged::FixTransactionalTamer(UObject* WorldContext) {
}

bool UBGUFunctionLibraryManaged::CreateTamerFromBPPath(UObject* WorldContext, const FString& BPPath, UObject*& TamerObject, UClass*& TamerClass) {
    return false;
}

bool UBGUFunctionLibraryManaged::CreateTamerFromUnitClass(UObject* WorldContext, UClass* UnitClass, UObject*& TamerObject, UClass*& TamerClass) {
    return false;
}

void UBGUFunctionLibraryManaged::RegGSGridConScreenAdapter(UObject* WorldContext, UGSGridConScreenAdapter* RefGSGridConScreenAdapter) {
}

void UBGUFunctionLibraryManaged::BGUChangeChapterLightBase(UObject* WorldContext, float LightBase) {
}

bool UBGUFunctionLibraryManaged::IsAnyStoryNodeHasGainItem(UBED_CalliopeAssetBase* InAsset) {
    return false;
}

void UBGUFunctionLibraryManaged::UnRegGSGridConScreenAdapter(UObject* WorldContext, UGSGridConScreenAdapter* RefGSGridConScreenAdapter) {
}

FString UBGUFunctionLibraryManaged::ConvertToTamerPathFromBPPath(UObject* WorldContext, const FString& BPPath) {
    return TEXT("");
}

void UBGUFunctionLibraryManaged::BatchReplaceMapUnitWithTamer(UObject* WorldContext) {
}

void UBGUFunctionLibraryManaged::AutoGenTamerFromUnitBlueprint(UObject* WorldContext, const FString& folder, bool bRecursive) {
}

void UBGUFunctionLibraryManaged::SetShaderPipelineCacheEnabled(UObject* WorldContext, bool IsEnable, APlayerController* TargetPlayerController) {
}

bool UBGUFunctionLibraryManaged::IsContainNonexistentTaskStage(UBED_CalliopeAssetBase* InAsset) {
    return false;
}

void UBGUFunctionLibraryManaged::BatchReplaceMapSpawnerWithTamer(UObject* WorldContext) {
}

void UBGUFunctionLibraryManaged::FixFontForPIEPreviewInEditorDebug(UUserWidget* TargetWidget) {
}


