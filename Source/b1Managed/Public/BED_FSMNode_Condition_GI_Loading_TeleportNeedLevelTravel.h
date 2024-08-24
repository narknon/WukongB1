#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_ConditionBase.h"
#include "BED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel : public UBED_FSMNode_ConditionBase {
    GENERATED_BODY()
public:
    UBED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

