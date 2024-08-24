#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "B1NetReplicationGraphConnection.generated.h"

class AActor;
class APlayerController;
class UActorChannel;

UCLASS(Blueprintable, NonTransient)
class UB1NetReplicationGraphConnection : public UNetReplicationGraphConnection {
    GENERATED_BODY()
public:
    UB1NetReplicationGraphConnection();

    UFUNCTION(BlueprintCallable)
    void SetActorNotDormantOnConnectionCS(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyActorChannelRemovedCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyActorChannelCleanedUpCS(UActorChannel* ActorChannel, int32 CloseReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyActorChannelAddedCS(AActor* Actor, UActorChannel* Channel);
    
    UFUNCTION(BlueprintCallable)
    bool IsInServerReal();
    
    UFUNCTION(BlueprintCallable)
    void GSAddB1ActorChannel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    APlayerController* GetPlayerControllerCS();
    
};

