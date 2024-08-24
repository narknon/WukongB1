#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraphNode_CSBase.h"
#include "B1ReplicationGraphNode_TamerMonster.generated.h"

class APlayerController;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_TamerMonster : public UB1ReplicationGraphNode_CSBase {
    GENERATED_BODY()
public:
    UB1ReplicationGraphNode_TamerMonster();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostServerReplicateActorCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherActorListsForConnectionCS(APlayerController* PlayerController);
    
};

