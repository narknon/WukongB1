#pragma once
#include "CoreMinimal.h"
#include "EPCGPointFilterOperator.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGSettings.h"
#include "PCGPointFilterSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGPointFilterSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointFilterOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector TargetAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector ThresholdAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpatialQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct AttributeTypes;
    
    UPCGPointFilterSettings();

};

