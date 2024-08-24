#pragma once
#include "CoreMinimal.h"
#include "BGU_DispLibUComponentBase.h"
#include "Templates/SubclassOf.h"
#include "B2D_DispLibFXActorCameraShakeData.generated.h"

class UMatineeCameraShake;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UB2D_DispLibFXActorCameraShakeData : public UBGU_DispLibUComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstDelayTime;
    
    UB2D_DispLibFXActorCameraShakeData(const FObjectInitializer& ObjectInitializer);

};

