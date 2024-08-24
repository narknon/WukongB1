#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "AssetExportMode.h"
#include "DispLib_EditorExportLevelToHoudini.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ADispLib_EditorExportLevelToHoudini : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseExcludedObjects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> ExcludedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelJsonFileExportPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelJsonFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FileNameAutoIndexSuffix: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnrealAssetsExportPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NaniteFallbackMeshExportPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AssetExportMode MeshExportMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AssetExportMode TextureExportMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoDisableNanite: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotMeragedActorsJsonFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimitBoxJsonFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PerUnitCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LimitBoxCenterPosArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LimitBoxStartEndIndexInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MergedChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightLimit;
    
    ADispLib_EditorExportLevelToHoudini(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ExportMeshAssets();
    
    UFUNCTION(BlueprintCallable)
    void ImportLimitBoxInfo();
    
    UFUNCTION(BlueprintCallable)
    void ExportLevelToHoudini();
    
    UFUNCTION(BlueprintCallable)
    void SelectActorsInLimitBox();
    
    UFUNCTION(BlueprintCallable)
    void SelectActorsByHeightLimit();
    
    UFUNCTION(BlueprintCallable)
    void ExportLevelDescriptionJson();
    
    UFUNCTION(BlueprintCallable)
    void ExportSplineDescriptionJson();
    
    UFUNCTION(BlueprintCallable)
    void ExportActorBoundsDescriptionJson();
    
    UFUNCTION(BlueprintCallable)
    void SelectActorsByNotMeragedActorsJson();
    
};

