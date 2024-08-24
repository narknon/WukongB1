#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "FGSTimeScaleSetting.h"
#include "BANS_GSSlowTime.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSlowTime : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGSTimeScaleSetting TimeScaleSetting;
    
    UBANS_GSSlowTime();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};
