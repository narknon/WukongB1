#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "BGPPlayerCameraManager.h"
#include "BGP_PlayerCameraManagerCS.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class ABGP_PlayerCameraManagerCS : public ABGPPlayerCameraManager {
    GENERATED_BODY()
public:
    ABGP_PlayerCameraManagerCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCameraCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetViewTargetCS(AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlendCompleteCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewTargetChangedCS(APlayerController* PC, AActor* OldViewTarget, AActor* NewViewTarget);
    
};

