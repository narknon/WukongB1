#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSReplaceDropItem.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSReplaceDropItem : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> WeaponIndexList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule ReplacementLocationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule ReplacementRotationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule ReplacementScaleRule;
    
    UBAN_GSReplaceDropItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

