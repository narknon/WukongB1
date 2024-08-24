#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_EditorFuncLib.generated.h"

class AActor;
class APostProcessVolume;
class UActorComponent;
class UAssetDataArray;
class UBlueprint;
class UBrushComponent;
class UObject;
class UStaticMeshComponent;
class UWorld;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_EditorFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_EditorFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetActorLevelBoundsRelevant(AActor* InActor, bool bRelevant);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorEditorOnly(AActor* Actor, bool NewEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClassPlaceable(UClass* AssetClass);
    
    UFUNCTION(BlueprintCallable)
    static void ImportCSVToStringTable(FName TableId, const FString& CSVPath);
    
    UFUNCTION(BlueprintCallable)
    static TArray<APostProcessVolume*> GetValidPostProcessVolumes(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static UAssetDataArray* GetContentBrowserSelections();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetCDONodeComponents(AActor* CDO);
    
    UFUNCTION(BlueprintCallable)
    static FBoxSphereBounds GetBrushBounds(UBrushComponent* BrushCom);
    
    UFUNCTION(BlueprintCallable)
    static void GatherText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FAssetData_GetTagValue(UAssetDataArray* AssetData, const FName& TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* FAssetData_GetClass(UAssetDataArray* AssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* FAssetData_GetAsset(UAssetDataArray* AssetData);
    
    UFUNCTION(BlueprintCallable)
    static void CompileText();
    
    UFUNCTION(BlueprintCallable)
    static void CheckActorBoundsInfo(AActor* InActor, bool bIncludeNonCollision, bool& OutActorLevelBoundsRelevant, FBox& OutActorBounds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGULandscapeCameraCollsion(UObject* WorldContextObject, int32 SurfaceType, float CellSize, float MaxHeightOffset, float MaxDisplacement, float CameraCollisionOffset);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMeshComponent* BGUGetStaticMeshComp(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UObject* AssetPath_GetCDO(UObject* Outer, const FString& Path, UBlueprint*& Blueprint);
    
};

