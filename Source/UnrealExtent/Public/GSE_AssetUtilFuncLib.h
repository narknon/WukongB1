#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_AssetUtilFuncLib.generated.h"

class UAssetDataArray;
class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_AssetUtilFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_AssetUtilFuncLib();

    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> LoadObjectsFromAssetData(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetReferenceAssetsFromObjects(TArray<UObject*> LoadedSourceAssets);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetReferenceAssetsFromAssets(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetDependenciesAssetsFromAssets(UAssetDataArray* Assets);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetAssetsInFolder(FName FolderPath, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetAssetsByPath(TArray<FString> Paths);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAssetDataTagValue(UAssetDataArray* AssetData, const FName& TagName);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetAssetDataFromPackageObj(const TArray<UObject*>& PackageObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetAssetDataClass(UAssetDataArray* AssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAssetDataAsset(UAssetDataArray* AssetData);
    
};

