#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_ShowMapTips.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_ShowMapTips : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIWordID;
    
    UBAN_ShowMapTips();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

