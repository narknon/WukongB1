#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "EnvironmentAbnormalEffectConfig.h"
#include "EnvironmentAbnormalRecoverRate.h"
#include "BGWDataAsset_EnvironmentAbnormalEffectConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_EnvironmentAbnormalEffectConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvironmentAbnormalEffectConfig> EnvironmentAbnormalEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvironmentAbnormalRecoverRate> EnvironmentAbnormalAutoRecoverRateList;
    
    UBGWDataAsset_EnvironmentAbnormalEffectConfig();

};

