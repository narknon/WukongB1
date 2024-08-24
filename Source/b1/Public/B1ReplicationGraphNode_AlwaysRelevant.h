#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "B1ReplicationGraphNode_AlwaysRelevant.generated.h"

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UB1ReplicationGraphNode_AlwaysRelevant();

};

