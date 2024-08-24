#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSPlayNiagaraFX.h"
#include "PlayNiagaraConditions.h"
#include "BAN_GSPlayNiagaraFX_WithCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSPlayNiagaraFX_WithCondition : public UBAN_GSPlayNiagaraFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayNiagaraConditions Condition;
    
    UBAN_GSPlayNiagaraFX_WithCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

