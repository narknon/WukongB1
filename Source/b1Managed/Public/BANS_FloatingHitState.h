#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_FloatingHitState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_FloatingHitState : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UBANS_FloatingHitState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

