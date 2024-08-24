#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSAddPostProcessMat.generated.h"

class UBGWDataAsset_PostProcessMatSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSAddPostProcessMat : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_PostProcessMatSetting* PostProcessMatSetting;
    
    UBANS_GSAddPostProcessMat();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

