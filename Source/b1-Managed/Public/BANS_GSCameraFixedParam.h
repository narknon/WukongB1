#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "CameraParamType.h"
#include "BANS_GSCameraFixedParam.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSCameraFixedParam : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CameraParamType FixedCameraParam;
    
    UBANS_GSCameraFixedParam();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

