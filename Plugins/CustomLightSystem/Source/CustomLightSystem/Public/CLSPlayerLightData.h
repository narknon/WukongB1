#pragma once
#include "CoreMinimal.h"
#include "CLSPlayerLightDataBase.h"
#include "CLSPlayerLightData.generated.h"

USTRUCT(BlueprintType)
struct FCLSPlayerLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase FrontLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSPlayerLightDataBase BackLightData;
    
    CUSTOMLIGHTSYSTEM_API FCLSPlayerLightData();
};

