#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GameplayTagContainer.h"
#include "BED_BehaviorNode.h"
#include "BED_BehaviorNode_EnterState.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_EnterState : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UBED_BehaviorNode_EnterState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

