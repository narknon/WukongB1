#pragma once
#include "CoreMinimal.h"
#include "BGWSplinePrismVolume.h"
#include "BGWSpatialAudioVolume.generated.h"

class UAkLateReverbComponent;
class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;

UCLASS(Blueprintable)
class B1_API ABGWSpatialAudioVolume : public ABGWSplinePrismVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    ABGWSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};

