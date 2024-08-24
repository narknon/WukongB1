#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSDirectionalLightData.h"
#include "CLSDirectionalLightBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSDirectionalLightBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSDirectionalLightData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSDirectionalLightData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSDirectionalLightData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSDirectionalLightBlendData();
};

