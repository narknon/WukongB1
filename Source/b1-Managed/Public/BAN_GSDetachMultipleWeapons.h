#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSDetachMultipleWeapons.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSDetachMultipleWeapons : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeaponIndexList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule DetachmentLocationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule DetachmentRotationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule DetachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsEnableInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelayTime;
    
    UBAN_GSDetachMultipleWeapons();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

