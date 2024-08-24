#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "Templates/SubclassOf.h"
#include "BGWDataAsset_CameraShakeWithControl.generated.h"

class UCurveFloat;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class UBGWDataAsset_CameraShakeWithControl : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WithControl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CamShakeScaleByDistCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EpicenterIsAttach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UBGWDataAsset_CameraShakeWithControl();

};

