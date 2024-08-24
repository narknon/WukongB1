#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "AnimNotify_GSFootStep.h"
#include "AnimNotify_GSFootStep_FootL.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_GSFootStep_FootL : public UAnimNotify_GSFootStep {
    GENERATED_BODY()
public:
    UAnimNotify_GSFootStep_FootL();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

