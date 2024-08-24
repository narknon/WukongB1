#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GSBase.h"
#include "UStGSNotifyParam.h"
#include "BAN_SwitchTransSpellSolution.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UBAN_SwitchTransSpellSolution : public UAnimNotify_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolutionID;
    
    UBAN_SwitchTransSpellSolution();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNotifyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

