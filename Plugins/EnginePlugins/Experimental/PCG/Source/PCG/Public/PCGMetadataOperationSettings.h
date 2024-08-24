#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGMetadataOperationSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataOperationSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPCGMetadataOperationSettings();

};

