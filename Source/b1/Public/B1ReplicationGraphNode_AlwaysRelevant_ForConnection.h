#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "ReplicationGraph.h"
#include "B1ReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UB1ReplicationGraphNode_AlwaysRelevant_ForConnection();

};

