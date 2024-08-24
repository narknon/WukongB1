#pragma once
#include "CoreMinimal.h"
#include "CLSCategoryWatchData.h"
#include "CLSPlayerLightWatchData.h"
#include "CLSVolumeWatchData.h"
#include "CLSWatchData.generated.h"

USTRUCT(BlueprintType)
struct FCLSWatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData DirectionalLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData SkyLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData AtmosphereData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData HeightFogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData CustomVariableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCategoryWatchData OtherData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightWatchData PlayerLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCLSVolumeWatchData> VolumeData;
    
    CUSTOMLIGHTSYSTEM_API FCLSWatchData();
};

