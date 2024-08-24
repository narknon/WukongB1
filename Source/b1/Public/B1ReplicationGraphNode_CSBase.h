#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "B1ReplicationGraphNode_CSBase.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_CSBase : public UReplicationGraphNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedRepActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedUpdateRepFrameActors;
    
public:
    UB1ReplicationGraphNode_CSBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareForReplicationCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostServerReplicateActorCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyResetAllNetworkActorsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NotifyRemoveNetworkActorCS(const AActor* Actor, bool bWarnIfNotFound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAddNetworkActorCS(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LogNodeCS(int32 Flag, const FString& NodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GatherActorListsForConnectionCS(APlayerController* PlayerController);
    
};

