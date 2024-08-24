#pragma once
#include "CoreMinimal.h"
#include "LandscapeReaderWeightData.h"
#include "LandscapeReaderAllWeightData.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeReaderAllWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeReaderWeightData> AllLayerData;
    
    UNREALEXTENT_API FLandscapeReaderAllWeightData();
};

