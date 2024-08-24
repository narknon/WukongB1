#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_UnhideAndPlayAnim.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_UnhideAndPlayAnim : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SKTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationToPlay;
    
    UBANS_UnhideAndPlayAnim();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

