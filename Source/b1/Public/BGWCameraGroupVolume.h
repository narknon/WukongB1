#pragma once
#include "CoreMinimal.h"
#include "BGWVolumeBase.h"
#include "BGWCameraGroupVolume.generated.h"

UCLASS(Blueprintable)
class B1_API ABGWCameraGroupVolume : public ABGWVolumeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraGroupId;
    
    ABGWCameraGroupVolume(const FObjectInitializer& ObjectInitializer);

};

