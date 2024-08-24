#pragma once
#include "CoreMinimal.h"
#include "CLSPlayerLightDataBase.h"
#include "CLSPlayerLightProperty.generated.h"

USTRUCT(BlueprintType)
struct FCLSPlayerLightProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase FrontLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase BackLightData;
    
    CUSTOMLIGHTSYSTEM_API FCLSPlayerLightProperty();
};

