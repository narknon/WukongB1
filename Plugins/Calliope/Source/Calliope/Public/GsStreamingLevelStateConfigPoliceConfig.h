#pragma once
#include "CoreMinimal.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsStreamingLevelStateConfigIntParamConfig.h"
#include "GsStreamingLevelStateConfigPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsStreamingLevelStateConfigPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsStreamingLevelStateConfigIntParamConfig ManagedDataAssetID;
    
    FGsStreamingLevelStateConfigPoliceConfig();
};

