#pragma once
#include "CoreMinimal.h"
#include "CLSMaterialParametersCollectionFloatProperty.h"
#include "CLSMaterialParametersCollectionVectorProperty.h"
#include "CLSMaterialParametersCollectionProperty.generated.h"

USTRUCT(BlueprintType)
struct FCLSMaterialParametersCollectionProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCLSMaterialParametersCollectionFloatProperty> MaterialParametersCollectionFloatProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCLSMaterialParametersCollectionVectorProperty> MaterialParametersCollectionVectorProperty;
    
    CUSTOMLIGHTSYSTEM_API FCLSMaterialParametersCollectionProperty();
};

