#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "EBUStateTrigger.h"
#include "BED_BehaviorNode_UnitStateTrigger.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_BehaviorNode_UnitStateTrigger : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBUStateTrigger UnitStateTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UBED_BehaviorNode_UnitStateTrigger();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

