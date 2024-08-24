#pragma once
#include "CoreMinimal.h"
#include "BehaviorTreeNodeData.generated.h"

class UBTTaskNode;

USTRUCT(BlueprintType)
struct FBehaviorTreeNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBTTaskNode*> TaskNodeList;
    
    UNREALEXTENT_API FBehaviorTreeNodeData();
};

