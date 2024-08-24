#pragma once
#include "CoreMinimal.h"
#include "CLSAtmosphericFogData.h"
#include "CLSBlendDataBase.h"
#include "CLSAtmosphereBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSAtmosphereBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSAtmosphericFogData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSAtmosphericFogData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSAtmosphericFogData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSAtmosphereBlendData();
};

