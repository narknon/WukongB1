#pragma once
#include "CoreMinimal.h"
#include "CLSMaterialParametersCollectionFloatProperty.generated.h"

USTRUCT(BlueprintType)
struct FCLSMaterialParametersCollectionFloatProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FValue;
    
    CUSTOMLIGHTSYSTEM_API FCLSMaterialParametersCollectionFloatProperty();
};

