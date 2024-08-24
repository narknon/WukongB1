#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSTriggerTransEffect.generated.h"

class UBGWDataAsset_TransEffectSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSTriggerTransEffect : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBGWDataAsset_TransEffectSetting> TransEffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EffectOffset;
    
    UBANS_GSTriggerTransEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
};

