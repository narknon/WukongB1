#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "BUC_DispLibDBC_CameraEnvFXInfo.h"
#include "BGW_DispLibCameraEnvFXDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGW_DispLibCameraEnvFXDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseCameraEnvFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_CameraEnvFXInfo> CameraEnvFXConfig;
    
    UBGW_DispLibCameraEnvFXDataAsset();

};

