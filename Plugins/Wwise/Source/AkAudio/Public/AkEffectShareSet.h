#pragma once
#include "CoreMinimal.h"
#include "WwiseLocalizedShareSetCookedData.h"
#include "AkAudioType.h"
#include "AkEffectShareSet.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkEffectShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;
    
    UAkEffectShareSet();

};

