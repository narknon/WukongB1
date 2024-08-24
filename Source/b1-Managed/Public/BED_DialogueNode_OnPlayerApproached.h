#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode_ListenerTrigger.h"
#include "BED_DialogueNode_OnPlayerApproached.generated.h"

UCLASS(Blueprintable)
class UBED_DialogueNode_OnPlayerApproached : public UBED_BehaviorNode_ListenerTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResID;
    
    UBED_DialogueNode_OnPlayerApproached();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

