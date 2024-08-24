#include "GSE_AssetUtilFuncLib.h"

UGSE_AssetUtilFuncLib::UGSE_AssetUtilFuncLib() {
}

TArray<UObject*> UGSE_AssetUtilFuncLib::LoadObjectsFromAssetData(UAssetDataArray* Assets) {
    return TArray<UObject*>();
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetReferenceAssetsFromObjects(TArray<UObject*> LoadedSourceAssets) {
    return NULL;
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetReferenceAssetsFromAssets(UAssetDataArray* Assets) {
    return NULL;
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetDependenciesAssetsFromAssets(UAssetDataArray* Assets) {
    return NULL;
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetAssetsInFolder(FName FolderPath, bool bRecursive, bool bIncludeOnlyOnDiskAssets) {
    return NULL;
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetAssetsByPath(TArray<FString> Paths) {
    return NULL;
}

FString UGSE_AssetUtilFuncLib::GetAssetDataTagValue(UAssetDataArray* AssetData, const FName& TagName) {
    return TEXT("");
}

UAssetDataArray* UGSE_AssetUtilFuncLib::GetAssetDataFromPackageObj(const TArray<UObject*>& PackageObjects) {
    return NULL;
}

UClass* UGSE_AssetUtilFuncLib::GetAssetDataClass(UAssetDataArray* AssetData) {
    return NULL;
}

UObject* UGSE_AssetUtilFuncLib::GetAssetDataAsset(UAssetDataArray* AssetData) {
    return NULL;
}


