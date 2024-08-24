#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EConstructionSystemToolType.h"
#include "Templates/SubclassOf.h"
#include "ConstructionSystemComponent.generated.h"

class AActor;
class UConstructionSystemTool;
class UConstructionSystemUIAsset;
class UMaterialInterface;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CursorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CursorInvalidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConstructionCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstructionCameraTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstructionCameraTransitionExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> BuildMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionSystemUIAsset* BuildMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* BuildMenuUIInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EConstructionSystemToolType ActiveToolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EConstructionSystemToolType, UConstructionSystemTool*> tools;
    
    UConstructionSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleConstructionSystem();
    
    UFUNCTION(BlueprintCallable)
    void ShowBuildMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTool(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintCallable)
    void HideBuildMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConstructionSystemToolType GetActiveToolType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConstructionSystemTool* GetActiveTool();
    
    UFUNCTION(BlueprintCallable)
    void EnableConstructionSystem(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintCallable)
    void DisableConstructionSystem();
    
};

