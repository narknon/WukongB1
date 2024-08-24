#pragma once
#include "CoreMinimal.h"
#include "CLSVolumeProcessParameters.generated.h"

USTRUCT(BlueprintType)
struct FCLSVolumeProcessParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CommandLines;
    
    CUSTOMLIGHTSYSTEM_API FCLSVolumeProcessParameters();
};

