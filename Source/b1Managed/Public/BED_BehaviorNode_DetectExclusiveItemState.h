#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BED_BehaviorNode_Condition.h"
#include "BED_BehaviorNode_DetectExclusiveItemState.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_DetectExclusiveItemState : public UBED_BehaviorNode_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StateTags;
    
    UBED_BehaviorNode_DetectExclusiveItemState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

