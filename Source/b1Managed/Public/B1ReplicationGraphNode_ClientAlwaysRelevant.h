#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraphNode_CSBase.h"
#include "B1ReplicationGraphNode_ClientAlwaysRelevant.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_ClientAlwaysRelevant : public UB1ReplicationGraphNode_CSBase {
    GENERATED_BODY()
public:
    UB1ReplicationGraphNode_ClientAlwaysRelevant();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAddNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NotifyRemoveNetworkActorCS(AActor* Actor, bool bWarnIfNotFound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherActorListsForConnectionCS(APlayerController* PlayerController);
    
};

