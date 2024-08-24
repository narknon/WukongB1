#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_AiConversation.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_AiConversation : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AiConversationContentIDList;
    
    UBED_BehaviorNode_AiConversation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

