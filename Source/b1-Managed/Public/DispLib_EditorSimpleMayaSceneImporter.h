#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "MayaShadingEngineToUnrealMaterial.h"
#include "SourceAsset.h"
#include "DispLib_EditorSimpleMayaSceneImporter.generated.h"

UCLASS(Blueprintable)
class ADispLib_EditorSimpleMayaSceneImporter : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TranslateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 QuatScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceAsset> SourceAssetLib;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMayaShadingEngineToUnrealMaterial> SourceMaterialLib;
    
    ADispLib_EditorSimpleMayaSceneImporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LogEulerToQuat();
    
    UFUNCTION(BlueprintCallable)
    void DoRebuildScene();
    
};

