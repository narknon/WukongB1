#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGW_DispLibGameDBDataAsset.generated.h"

class UBGW_DispLibCameraEnvFXDataAsset;
class UBGW_DispLibConstDataAsset;
class UBGW_DispLibFNameCacheDataAsset;
class UBGW_DispLibUniversalArtFresnelCacheDataAsset;

UCLASS(Blueprintable)
class UBGW_DispLibGameDBDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_DispLibConstDataAsset* DispConstDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_DispLibCameraEnvFXDataAsset* CameraEnvFXDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_DispLibFNameCacheDataAsset* FNameCacheDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_DispLibUniversalArtFresnelCacheDataAsset* UniversalArtFresnelCacheDA;
    
    UBGW_DispLibGameDBDataAsset();

};

