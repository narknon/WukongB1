#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGLinearDensityRemapSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGLinearDensityRemapSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemapMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemapMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiplyDensity;
    
    UPCGLinearDensityRemapSettings();

};

