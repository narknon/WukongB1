#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceCookedData.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseGroupValueCookedData.h"
#include "WwiseSwitchContainerLeafCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseSwitchContainerLeafCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FWwiseGroupValueCookedData> GroupValueSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseExternalSourceCookedData> ExternalSources;
    
    FWwiseSwitchContainerLeafCookedData();
};

