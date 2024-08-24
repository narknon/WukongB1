#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSTimedPlayNiagaraFX.h"
#include "PlayNiagaraConditions.h"
#include "BANS_GSTimedPlayNiagaraFX_WithCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSTimedPlayNiagaraFX_WithCondition : public UBANS_GSTimedPlayNiagaraFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayNiagaraConditions Condition;
    
    UBANS_GSTimedPlayNiagaraFX_WithCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

