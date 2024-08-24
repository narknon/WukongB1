#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_ShowShrineMain.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_ShowShrineMain : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_ShowShrineMain();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

