#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSSwitchAimingSetting.generated.h"

class UBGWDataAsset_AbpHumanoidSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSwitchAimingSetting : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AbpHumanoidSetting* AimAndShoot;
    
    UBANS_GSSwitchAimingSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

