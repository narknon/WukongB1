#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_RenderUtilFuncLib.generated.h"

class AActor;
class APlayerCameraManager;
class UActorComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_RenderUtilFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_RenderUtilFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetRenderCustomDepth(AActor* AA, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCameraShake(UClass* CameraShakeCls, APlayerCameraManager* Camera);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableSKMFilteredSockets(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& OverrideFilteredSockets);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableSKMFilteredBones(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& OverrideFilteredBones);
    
    UFUNCTION(BlueprintCallable)
    static void MarkRenderStateDirty(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetSceneViewPreExposure(AActor* WorldContext);
    
};

