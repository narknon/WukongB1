#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "UDispLib_PostPorcessCommonConf.h"
#include "UDispLib_PostProcessBlueprintConf.h"
#include "UDispLib_PostProcessRadialBlurConf.h"
#include "DispLib_PostProcessConf.generated.h"

UCLASS(Blueprintable)
class UDispLib_PostProcessConf : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUDispLib_PostProcessRadialBlurConf RadialBlurConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUDispLib_PostProcessBlueprintConf InverseFieldConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUDispLib_PostPorcessCommonConf> CommonConfs;
    
    UDispLib_PostProcessConf();

};

