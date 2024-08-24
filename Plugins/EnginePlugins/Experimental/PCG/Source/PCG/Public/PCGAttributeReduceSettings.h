#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeReduceOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeReduceSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeReduceSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeReduceOperation Operation;
    
    UPCGAttributeReduceSettings();

};

