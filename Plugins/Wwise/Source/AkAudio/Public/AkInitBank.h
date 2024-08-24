#pragma once
#include "CoreMinimal.h"
#include "WwiseInitBankCookedData.h"
#include "AkAudioType.h"
#include "AkInitBank.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkInitBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseInitBankCookedData InitBankCookedData;
    
    UAkInitBank();

};

