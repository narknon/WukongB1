#pragma once
#include "CoreMinimal.h"
#include "CLSCategoryWatchData.h"
#include "CLSPlayerLightDataBase.h"
#include "CLSPlayerLightWatchData.generated.h"

USTRUCT(BlueprintType)
struct FCLSPlayerLightWatchData : public FCLSCategoryWatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase FrontLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase BackLightData;
    
    CUSTOMLIGHTSYSTEM_API FCLSPlayerLightWatchData();
};

