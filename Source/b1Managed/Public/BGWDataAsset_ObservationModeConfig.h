#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ObModeSource.h"
#include "ObservationModeConfig.h"
#include "SpecialItemObModeConfig.h"
#include "BGWDataAsset_ObservationModeConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_ObservationModeConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ObModeSource, FObservationModeConfig> ObModeConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSpecialItemObModeConfig> SpecialItemObModeConfigMap;
    
    UBGWDataAsset_ObservationModeConfig();

};

