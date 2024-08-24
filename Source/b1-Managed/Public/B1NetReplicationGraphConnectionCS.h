#pragma once
#include "CoreMinimal.h"
#include "B1NetReplicationGraphConnection.h"
#include "B1NetReplicationGraphConnectionCS.generated.h"

class AActor;
class UActorChannel;

UCLASS(Blueprintable, NonTransient)
class UB1NetReplicationGraphConnectionCS : public UB1NetReplicationGraphConnection {
    GENERATED_BODY()
public:
    UB1NetReplicationGraphConnectionCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyActorChannelAddedCS(AActor* Actor, UActorChannel* Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyActorChannelRemovedCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyActorChannelCleanedUpCS(UActorChannel* Channel, int32 CloseReason);
    
};

