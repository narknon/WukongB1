#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BGUCostAttrInfo.h"
#include "BANS_CostAttrByChargeLevel.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_CostAttrByChargeLevel : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBGUCostAttrInfo> Config;
    
    UBANS_CostAttrByChargeLevel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

