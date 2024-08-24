#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSHeightFogData.h"
#include "CLSHeightFogBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSHeightFogBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSHeightFogData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSHeightFogData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSHeightFogData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSHeightFogBlendData();
};

