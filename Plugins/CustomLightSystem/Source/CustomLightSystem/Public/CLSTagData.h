#pragma once
#include "CoreMinimal.h"
#include "CLSTagData.generated.h"

USTRUCT(BlueprintType)
struct FCLSTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightManagerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CLSComponentType;
    
    CUSTOMLIGHTSYSTEM_API FCLSTagData();
};

