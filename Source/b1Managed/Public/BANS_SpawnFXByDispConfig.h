#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_SpawnFXByDispConfig.generated.h"

class UBUC_DispLibDispBaseConfigDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_SpawnFXByDispConfig : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibDispBaseConfigDataAsset* DispConfigDA;
    
    UBANS_SpawnFXByDispConfig();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

