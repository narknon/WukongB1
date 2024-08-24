#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BWC_DispLibEnvSettings.h"
#include "BWS_DispLibEnvWeatherSetting.generated.h"

UCLASS(Blueprintable)
class UBWS_DispLibEnvWeatherSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWC_DispLibEnvSettings Setting;
    
    UBWS_DispLibEnvWeatherSetting();

};

