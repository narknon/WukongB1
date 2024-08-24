#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialLayersFunctions.h"
#include "BGUMaterialParameterInfo.generated.h"

class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FBGUMaterialParameterInfo : public FMaterialParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionInterface* LayerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionInterface* BlendMaterial;
    
    FBGUMaterialParameterInfo();
};

