#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataMathsOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataMathsSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMedadataMathsOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource3;
    
    UPCGMetadataMathsSettings();

};

