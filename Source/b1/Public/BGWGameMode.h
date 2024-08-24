#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/GameMode.h"
#include "BGWGameMode.generated.h"

class AActor;
class AController;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class B1_API ABGWGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ABGWGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartPlayerCS(AController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartGameCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreLoginCS(const FString& Options, const FString& LoginAddress, const FString& UniqueId, FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSeamlessTravelCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoginCS(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitPropertiesCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoginOutCS(AController* Exiting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMovieRendering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitGameCS(const FString& MapName, const FString& Options, FString& ErrorMessag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleStartingNewPlayerCS(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchIsWaitingToStartCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchHasStartedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLeavingMapCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSeamlessTravelActorListCS(bool bToTransition, TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginEndPlayCS(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

