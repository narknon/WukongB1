#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "ConditionalRelation.h"
#include "TaskQueryConditionInfo.h"
#include "BED_TaskNode_QueryCompoundCondition.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_QueryCompoundCondition : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ConditionalRelation ConditionRelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverseCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskQueryConditionInfo> Conditions;
    
    UBED_TaskNode_QueryCompoundCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

