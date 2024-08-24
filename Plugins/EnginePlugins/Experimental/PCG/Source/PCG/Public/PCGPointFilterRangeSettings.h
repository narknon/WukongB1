#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGPointFilterThresholdSettings.h"
#include "PCGSettings.h"
#include "PCGPointFilterRangeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGPointFilterRangeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector TargetAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPointFilterThresholdSettings MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPointFilterThresholdSettings MaxThreshold;
    
    UPCGPointFilterRangeSettings();

};

