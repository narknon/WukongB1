#pragma once
#include "CoreMinimal.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "DispLib_EditorTreeLODTools.generated.h"

UCLASS(Blueprintable)
class ADispLib_EditorTreeLODTools : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CacaheActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomMeshAssetsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableSimBlock: 1;
    
    ADispLib_EditorTreeLODTools(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LogLevelTreeInfo();
    
    UFUNCTION(BlueprintCallable)
    void ConverToInstanceActor();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllTreeActorHide();
    
    UFUNCTION(BlueprintCallable)
    void SetAllTreeActorVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void RepleaceCustomMeshAssetToImposter();
    
    UFUNCTION(BlueprintCallable)
    void RepleaceCustomMeshAssetToReduceMesh();
    
    UFUNCTION(BlueprintCallable)
    void RepleaceOriginMeshAssetToCustomMeshAsset();
    
};

