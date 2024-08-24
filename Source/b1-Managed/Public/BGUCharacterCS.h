#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUCharacter.h"
#include "BGUCharacterCS.generated.h"

class APlayerController;
class UActorCompContainerCS;
class UNetConnection;

UCLASS(Blueprintable)
class ABGUCharacterCS : public ABGUCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    ABGUCharacterCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuidCS(FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorChannelOpen(UNetConnection* Connection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerCharacterCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostNetReceiveRoleCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APlayerController* GetGSAuthorityPlayerCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementModeChangedCS(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreDestroyFromReplicationCS();
    
};

