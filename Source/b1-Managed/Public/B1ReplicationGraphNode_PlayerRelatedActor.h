#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraphNode_CSBase.h"
#include "B1ReplicationGraphNode_PlayerRelatedActor.generated.h"

class APlayerController;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_PlayerRelatedActor : public UB1ReplicationGraphNode_CSBase {
    GENERATED_BODY()
public:
    UB1ReplicationGraphNode_PlayerRelatedActor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherActorListsForConnectionCS(APlayerController* PlayerController);
    
};

