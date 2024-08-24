#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSBlendPhysicForDeath.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSBlendPhysicForDeath : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableWeaponAutoSwitchPhysic: 1;
    
    UBANS_GSBlendPhysicForDeath();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

