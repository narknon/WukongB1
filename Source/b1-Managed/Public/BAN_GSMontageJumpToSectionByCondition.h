#pragma once
#include "CoreMinimal.h"
#include "EGsEnAnimN.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "JumpSectionCondition.h"
#include "BAN_GSMontageJumpToSectionByCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSMontageJumpToSectionByCondition : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    JumpSectionCondition JumpSectionConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bJumpImmediately: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpToSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> JumpToSectionNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JumpableSectionPrefix;
    
    UBAN_GSMontageJumpToSectionByCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimN GetAnimNType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetJumpableSectionPrefix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

