#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_LifeSavingHairBlocking.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_LifeSavingHairBlocking : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UBANS_LifeSavingHairBlocking();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

