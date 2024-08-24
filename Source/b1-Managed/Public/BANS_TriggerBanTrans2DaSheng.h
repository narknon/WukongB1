#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_TriggerBanTrans2DaSheng.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_TriggerBanTrans2DaSheng : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UBANS_TriggerBanTrans2DaSheng();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

