#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_ConditionBase.h"
#include "BED_FSMNode_Condition_PS_Transaction_TaskCondition.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_Condition_PS_Transaction_TaskCondition : public UBED_FSMNode_ConditionBase {
    GENERATED_BODY()
public:
    UBED_FSMNode_Condition_PS_Transaction_TaskCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

