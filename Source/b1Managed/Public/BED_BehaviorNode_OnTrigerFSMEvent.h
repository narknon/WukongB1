#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GameplayTagContainer.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_OnTrigerFSMEvent.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_OnTrigerFSMEvent : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UBED_BehaviorNode_OnTrigerFSMEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

