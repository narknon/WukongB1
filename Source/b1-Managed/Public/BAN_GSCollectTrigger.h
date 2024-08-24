#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSCollectTrigger.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSCollectTrigger : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_GSCollectTrigger();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

