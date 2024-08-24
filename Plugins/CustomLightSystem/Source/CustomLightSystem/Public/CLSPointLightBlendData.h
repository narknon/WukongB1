#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSPlayerLightData.h"
#include "CLSPointLightBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSPointLightBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSPointLightBlendData();
};

