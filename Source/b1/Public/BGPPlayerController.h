#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/PlayerController.h"
#include "BGPPlayerController.generated.h"

class AActor;
class APawn;
class UNetConnection;
class UObject;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class B1_API ABGPPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGSIsLocalPlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInTeleport;
    
    ABGPPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnLocationCS(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShouldPerformFullTickWhenPaused(bool IsShould);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_PlayerStateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_PawnCS();
    
    UFUNCTION(BlueprintCallable)
    void OnPossessWithViewTargetBlend(APawn* InPawn, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool EnableBlendViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitInputSystemCS();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSpawnLocationCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSeamlessTravelActorListCS(bool bToEntry, TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetPlayerViewPointCS(FVector& out_Location, FRotator& out_Rotation) const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPendingViewTarget();
    
    UFUNCTION(BlueprintCallable)
    UNetConnection* GetNetConnectionCS();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsShouldPerformFullTickWhenPaused();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraBlendTimeToGo();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetCachedConsoleWorldContext();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCachedConsoleCommandCS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAudioListenerRotationCS(FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAudioListenerPositionCS(FVector& OutLocation, FVector& OutFrontDir, FVector& OutRightDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsoleCommandCS(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
};

