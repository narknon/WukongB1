#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANItemTeleportType.h"
#include "BAN_GSBase.h"
#include "BAN_GSItemTeleportTrigger.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSItemTeleportTrigger : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    BANItemTeleportType ItemTeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetRebirthPointId;
    
    UBAN_GSItemTeleportTrigger();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

