#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSLightData.h"
#include "CLSOtherBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSOtherBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSLightData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSLightData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSLightData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSOtherBlendData();
};

