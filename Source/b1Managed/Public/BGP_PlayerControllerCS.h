#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGPPlayerController.h"
#include "BGP_PlayerControllerCS.generated.h"

class AActor;
class UActorCompContainerCS;
class UActorDataContainer;
class UBPS_GSEventCollection;

UCLASS(Blueprintable)
class ABGP_PlayerControllerCS : public ABGPPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBPS_GSEventCollection* EventCollection;
    
public:
    ABGP_PlayerControllerCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GSRpcSendServer(TArray<uint8> SendData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void GSRpcSendClient(TArray<uint8> SendData);
    
    UFUNCTION(BlueprintCallable)
    void OnControlledPawnChange(AActor* OldPawn, AActor* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConsoleCommandCS(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInputSystemCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PlayerStateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetPlayerViewPointCS(FVector& out_Location, FRotator& out_Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSeamlessTravelActorListCS(bool bToEntry, TArray<AActor*>& ActorList);
    
};

