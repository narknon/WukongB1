#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "ConditionalRelation.h"
#include "ProcessQueryConditionInfo.h"
#include "BED_ProcessStateNode_QueryCompoundCondition.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_QueryCompoundCondition : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ConditionalRelation ConditionRelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverseCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProcessQueryConditionInfo> Conditions;
    
    UBED_ProcessStateNode_QueryCompoundCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

