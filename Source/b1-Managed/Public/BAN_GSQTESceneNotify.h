#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSQTESceneNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSQTESceneNotify : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_GSQTESceneNotify();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

