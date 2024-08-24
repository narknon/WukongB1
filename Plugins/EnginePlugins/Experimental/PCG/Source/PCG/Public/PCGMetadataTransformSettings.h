#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataTransformOperation.h"
#include "EPCGTransformLerpMode.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataTransformSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMedadataTransformOperation Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGTransformLerpMode TransformLerpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource3;
    
    UPCGMetadataTransformSettings();

};

