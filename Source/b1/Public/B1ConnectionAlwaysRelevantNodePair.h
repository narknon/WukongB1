#pragma once
#include "CoreMinimal.h"
#include "B1ConnectionAlwaysRelevantNodePair.generated.h"

class UB1ReplicationGraphNode_AlwaysRelevant_ForConnection;
class UNetConnection;

USTRUCT(BlueprintType)
struct FB1ConnectionAlwaysRelevantNodePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* NetConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UB1ReplicationGraphNode_AlwaysRelevant_ForConnection* Node;
    
    B1_API FB1ConnectionAlwaysRelevantNodePair();
};

