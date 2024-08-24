#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CLSMpcData.generated.h"

USTRUCT(BlueprintType)
struct FCLSMpcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> MPCFloatPropertyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLinearColor> MPCVectorPropertyMap;
    
    CUSTOMLIGHTSYSTEM_API FCLSMpcData();
};

