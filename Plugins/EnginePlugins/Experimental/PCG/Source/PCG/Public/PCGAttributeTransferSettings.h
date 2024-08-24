#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeTransferSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeTransferSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector SourceAttributeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector TargetAttributeProperty;
    
    UPCGAttributeTransferSettings();

};

