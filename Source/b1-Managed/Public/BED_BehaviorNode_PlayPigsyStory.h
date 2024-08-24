#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_PlayPigsyStory.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_PlayPigsyStory : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UBED_BehaviorNode_PlayPigsyStory();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

