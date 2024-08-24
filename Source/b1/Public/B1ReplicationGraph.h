#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicationGraph.h"
#include "B1ConnectionAlwaysRelevantNodePair.h"
#include "B1ReplicationGraph.generated.h"

class AActor;
class ABGUCharacter;
class APlayerController;
class UB1NetReplicationGraphConnection;
class UB1ReplicationGraphNode_CSBase;
class UNetConnection;
class UNetReplicationGraphConnection;
class UObject;
class UReplicationGraphNode;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsWithoutNetConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FB1ConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
    
    UB1ReplicationGraph();

    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldServerMultiCastRPCForPlayerCS(APlayerController* Controller, AActor* Actor, int64 FuncAddr);
    
    UFUNCTION(BlueprintCallable)
    void SetRoleSwapOnReplicateCS(AActor* Actor, bool Swap);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalReplicationClassInfo(UClass* ReplicatedClass, float CullDistanceSquared, int32 ReplicationPeriodFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysRelevantNodeCS(UB1ReplicationGraphNode_CSBase* AlwaysRelevantNodeCS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RouteRemoveNetworkActorToNodesCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RouteAddNetworkActorToNodesCS(AActor* Actor, FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetGameWorldStateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConnectionGraphNodeCS(UReplicationGraphNode* GraphNode, UNetReplicationGraphConnection* ConnectionManager);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBGUCharacterFromAlwaysRelevantNodeCS(ABGUCharacter* Actor);
    
    UFUNCTION(BlueprintCallable)
    void InitNodeCS(UB1ReplicationGraphNode_CSBase* CSNode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitGlobalGraphNodesCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitGlobalActorClassSettingsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitConnectionGraphNodesCS(UNetReplicationGraphConnection* RepGraphConnection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNetworkRemapPathCS(const UObject* Outer, const FString& OriginName, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorldCS();
    
    UFUNCTION(BlueprintCallable)
    UNetConnection* GetServerConnectionCS();
    
    UFUNCTION(BlueprintCallable)
    UB1NetReplicationGraphConnection* GetReplicationGraphConnectionByPC(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    UNetReplicationGraphConnection* GetConnectionByIndexCS(int32 Idx);
    
    UFUNCTION(BlueprintCallable)
    void ClienResetActorChannelCS(ABGUCharacter* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddConnectionGraphNodeCS(UReplicationGraphNode* GraphNode, UNetReplicationGraphConnection* ConnectionManager);
    
    UFUNCTION(BlueprintCallable)
    void AddBGUCharacterToAlwaysRelevantNodeCS(ABGUCharacter* Actor);
    
};

