#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_ConditionBase.h"
#include "BED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin : public UBED_FSMNode_ConditionBase {
    GENERATED_BODY()
public:
    UBED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};
