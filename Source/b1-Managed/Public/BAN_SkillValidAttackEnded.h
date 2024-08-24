#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_SkillValidAttackEnded.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_SkillValidAttackEnded : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UBAN_SkillValidAttackEnded();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

