#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCGAttributeSelectAxis.h"
#include "EPCGAttributeSelectOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeSelectSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeSelectSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeSelectOperation Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeSelectAxis Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 CustomAxis;
    
    UPCGAttributeSelectSettings();

};

