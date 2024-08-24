#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeNoiseMode.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeNoiseSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeNoiseSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeNoiseMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampResult;
    
    UPCGAttributeNoiseSettings();

};

