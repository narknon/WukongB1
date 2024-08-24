#pragma once
#include "CoreMinimal.h"
#include "WwiseTriggerCookedData.h"
#include "AkAudioType.h"
#include "AkTrigger.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkTrigger : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseTriggerCookedData TriggerCookedData;
    
    UAkTrigger();

};

