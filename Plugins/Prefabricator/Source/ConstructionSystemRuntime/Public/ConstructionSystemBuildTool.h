#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemTool.h"
#include "ConstructionSystemBuildTool.generated.h"

class UConstructionSystemCursor;
class UPrefabricatorAssetInterface;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemBuildTool : public UConstructionSystemTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorRotationStepAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UConstructionSystemCursor* Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPrefabricatorAssetInterface* ActivePrefabAsset;
    
public:
    UConstructionSystemBuildTool();

    UFUNCTION(BlueprintCallable)
    void SetActivePrefab(UPrefabricatorAssetInterface* InActivePrefabAsset);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInput_RotateCursorStep(float NumSteps);
    
    UFUNCTION(BlueprintCallable)
    void HandleInput_CursorMovePrev();
    
    UFUNCTION(BlueprintCallable)
    void HandleInput_CursorMoveNext();
    
    UFUNCTION(BlueprintCallable)
    void HandleInput_ConstructAtCursor();
    
};

