#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_ExitPhasePerformance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_ExitPhasePerformance : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_ExitPhasePerformance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

