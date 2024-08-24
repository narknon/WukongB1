#pragma once
#include "CoreMinimal.h"
#include "WwiseGroupValueCookedData.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseGroupValueCookedData GroupValueCookedData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GroupShortId;
    
    UAkGroupValue();

};

