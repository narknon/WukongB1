#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataMakeTransformSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource3;
    
    UPCGMetadataMakeTransformSettings();

};

