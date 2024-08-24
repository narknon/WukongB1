#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "BGPPlayerCameraManager.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class B1_API ABGPPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ABGPPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCameraCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetViewTargetCS(AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewTargetChangedCS(APlayerController* PC, AActor* OldViewTarget, AActor* NewViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlendCompleteCS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetViewTargetCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPendingViewTargetCS() const;
    
};

