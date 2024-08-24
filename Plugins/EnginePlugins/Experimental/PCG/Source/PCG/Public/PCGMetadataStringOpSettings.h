#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataStringOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataStringOpSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataStringOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource2;
    
    UPCGMetadataStringOpSettings();

};

