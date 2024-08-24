#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "TransformBySplineRotateType.h"
#include "BANS_AdjustTransformBySpline.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_AdjustTransformBySpline : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplineGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TransformBySplineRotateType RotateType;
    
    UBANS_AdjustTransformBySpline();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyTickCS(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

