#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGMetadataBreakVectorSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPCGMetadataBreakVectorSettings();

};

