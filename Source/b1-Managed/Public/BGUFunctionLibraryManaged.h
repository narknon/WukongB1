#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIPageID.h"
#include "Templates/SubclassOf.h"
#include "BGUFunctionLibraryManaged.generated.h"

class APlayerController;
class UBED_CalliopeAssetBase;
class UBED_CalliopeNodeBae;
class UClass;
class UGSGridConScreenAdapter;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UBGUFunctionLibraryManaged : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibraryManaged();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RunScriptGM(const FString& GMCommand, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUSwitchPage(UObject* WorldContext, EUIPageID PageId);
    
    UFUNCTION(BlueprintCallable)
    static UClass* FindOrLoadClass(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUSetPageActive(UObject* WorldContext, EUIPageID PageId, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSaveTempWidget(UUserWidget* TmpWidget);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllNodeByClass(UBED_CalliopeAssetBase* InAsset, TSubclassOf<UBED_CalliopeNodeBae> NodeClass, TArray<UBED_CalliopeNodeBae*>& Nodes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUActiveUIBlackOut(UObject* WorldContext, bool IsActive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FixTransactionalTamer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CreateTamerFromBPPath(UObject* WorldContext, const FString& BPPath, UObject*& TamerObject, UClass*& TamerClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CreateTamerFromUnitClass(UObject* WorldContext, UClass* UnitClass, UObject*& TamerObject, UClass*& TamerClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RegGSGridConScreenAdapter(UObject* WorldContext, UGSGridConScreenAdapter* RefGSGridConScreenAdapter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUChangeChapterLightBase(UObject* WorldContext, float LightBase);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyStoryNodeHasGainItem(UBED_CalliopeAssetBase* InAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnRegGSGridConScreenAdapter(UObject* WorldContext, UGSGridConScreenAdapter* RefGSGridConScreenAdapter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FString ConvertToTamerPathFromBPPath(UObject* WorldContext, const FString& BPPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BatchReplaceMapUnitWithTamer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AutoGenTamerFromUnitBlueprint(UObject* WorldContext, const FString& folder, bool bRecursive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetShaderPipelineCacheEnabled(UObject* WorldContext, bool IsEnable, APlayerController* TargetPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsContainNonexistentTaskStage(UBED_CalliopeAssetBase* InAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BatchReplaceMapSpawnerWithTamer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void FixFontForPIEPreviewInEditorDebug(UUserWidget* TargetWidget);
    
};

