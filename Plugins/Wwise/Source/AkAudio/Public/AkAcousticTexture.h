#pragma once
#include "CoreMinimal.h"
#include "WwiseAcousticTextureCookedData.h"
#include "AkAudioType.h"
#include "AkAcousticTexture.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAcousticTexture : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseAcousticTextureCookedData AcousticTextureCookedData;
    
    UAkAcousticTexture();

};

