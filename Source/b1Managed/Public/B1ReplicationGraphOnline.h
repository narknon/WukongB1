#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraphCS.h"
#include "B1ReplicationGraphOnline.generated.h"

class AActor;
class APlayerController;
class UNetReplicationGraphConnection;
class UObject;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphOnline : public UB1ReplicationGraphCS {
    GENERATED_BODY()
public:
    UB1ReplicationGraphOnline();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNetworkRemapPathCS(UObject* Outer, const FString& OriginName, FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitConnectionGraphNodesCS(UNetReplicationGraphConnection* RepGraphConnection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitGlobalActorClassSettingsCS();
    
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldServerMultiCastRPCForPlayerCS(APlayerController* Controller, AActor* Actor, int64 FuncAddr);
    
};

