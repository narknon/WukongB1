#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataBooleanOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataBooleanSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMedadataBooleanOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource2;
    
    UPCGMetadataBooleanSettings();

};

