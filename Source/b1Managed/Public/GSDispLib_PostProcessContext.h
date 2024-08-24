#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSDispLib_PostProcessContext.generated.h"

class APostProcessVolume;
class UBWS_DispLibImageProcessor;
class UDispLib_PostProcessConf;
class UWorld;

UCLASS(Blueprintable)
class UGSDispLib_PostProcessContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDispLib_PostProcessConf* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBWS_DispLibImageProcessor* ImageProcessor;
    
    UGSDispLib_PostProcessContext();

};

