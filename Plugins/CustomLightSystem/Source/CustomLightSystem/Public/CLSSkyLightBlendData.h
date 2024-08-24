#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSSkyLightData.h"
#include "CLSSkyLightBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSSkyLightBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSSkyLightData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSSkyLightData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSSkyLightData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSSkyLightBlendData();
};

