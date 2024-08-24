#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CLSMaterialParametersCollectionVectorProperty.generated.h"

USTRUCT(BlueprintType)
struct FCLSMaterialParametersCollectionVectorProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FValue;
    
    CUSTOMLIGHTSYSTEM_API FCLSMaterialParametersCollectionVectorProperty();
};

