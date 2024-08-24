#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "BWS_DispLibEnvSystemConf.generated.h"

UCLASS(Blueprintable)
class UBWS_DispLibEnvSystemConf : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SunnyTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WeatherTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherChangeDuration;
    
    UBWS_DispLibEnvSystemConf();

};

