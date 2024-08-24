#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_NotifyExclusiveItem.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_NotifyExclusiveItem : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyTag;
    
    UBED_BehaviorNode_NotifyExclusiveItem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

