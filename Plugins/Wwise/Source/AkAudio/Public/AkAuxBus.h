#pragma once
#include "CoreMinimal.h"
#include "WwiseLocalizedAuxBusCookedData.h"
#include "AkAudioType.h"
#include "AkAuxBus.generated.h"

class UAkAudioBank;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAuxBus : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseLocalizedAuxBusCookedData AuxBusCookedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* RequiredBank;
    
    UAkAuxBus();

};

