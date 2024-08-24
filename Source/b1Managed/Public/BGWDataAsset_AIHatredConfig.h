#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_AIHatredConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_AIHatredConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> UnitBaseHatreds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWeightMultiplier;
    
    UBGWDataAsset_AIHatredConfig();

};

