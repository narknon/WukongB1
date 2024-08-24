#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ChargeLevelConfig.h"
#include "BGWDataAsset_ChargeLevelConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_ChargeLevelConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChargeLevelConfig> ChargeLevelConfigs;
    
    UBGWDataAsset_ChargeLevelConfig();

};

