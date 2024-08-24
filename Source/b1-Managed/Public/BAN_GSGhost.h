#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSGhost.generated.h"

class UAnimMontage;
class UBGWDataAsset_GhostActorSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSGhost : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_GhostActorSetting* GhostSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToMapTo;
    
    UBAN_GSGhost();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

