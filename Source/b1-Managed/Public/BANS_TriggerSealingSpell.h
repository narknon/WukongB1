#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_TriggerSealingSpell.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_TriggerSealingSpell : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UBANS_TriggerSealingSpell();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

