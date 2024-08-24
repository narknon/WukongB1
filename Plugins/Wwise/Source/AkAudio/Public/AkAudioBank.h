#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkAudioBank.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoLoad;
    
    UAkAudioBank();

};

