#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Interface_DispLibEnvVolume.h"
#include "BWC_DispLibEnvVolume.generated.h"

class UBWS_DispLibEnvWeatherSetting;

UCLASS(Blueprintable)
class ABWC_DispLibEnvVolume : public AVolume, public IInterface_DispLibEnvVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBWS_DispLibEnvWeatherSetting*> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnbound;
    
    ABWC_DispLibEnvVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

