#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BANS_GSHandleBattleMessage.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSHandleBattleMessage : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattleMessage;
    
    UBANS_GSHandleBattleMessage();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

