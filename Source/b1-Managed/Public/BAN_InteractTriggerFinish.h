#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_InteractTriggerFinish.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_InteractTriggerFinish : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_InteractTriggerFinish();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

